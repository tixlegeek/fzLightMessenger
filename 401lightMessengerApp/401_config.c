/**
 *  ▌  ▞▚ ▛▚ ▌  ▞▚ ▟  Copyright© 2024 LAB401 GPLv3
 *  ▌  ▛▜ ▛▚ ▙▙ ▌▐ ▐  This program is free software
 *  ▀▀ ▘▝ ▀▘  ▘ ▝▘ ▀▘ See LICENSE.txt - lab401.com
 *    + Tixlegeek
 */
#include "401_config.h"
#include "401LightMsg_config.h"

static const char *TAG = "401_Configuration";

// Predefined configurations
void debug_config(Configuration *config)
{
    FURI_LOG_I(TAG, "Configuration:");
    FURI_LOG_I(TAG, "  Version: %s", config->version ? config->version : "NULL");
    FURI_LOG_I(TAG, "  Text: %s", config->text ? config->text : "NULL");
    FURI_LOG_I(TAG, "  bitmapPath: %s", config->bitmapPath ? config->bitmapPath : "NULL");
    FURI_LOG_I(TAG, "  Color: %u", config->color);
    FURI_LOG_I(TAG, "  Brightness: %u", config->brightness);
    FURI_LOG_I(TAG, "  Orientation: %s", config->orientation ? "true" : "false");
    FURI_LOG_I(TAG, "  Callback Address: %p", (void *)config->cb);
}

l401_err config_alloc(Configuration **config)
{

    if (*config != NULL)
    {
        free(*config);
    }

    // Allocate new memory
    *config = (Configuration *)malloc(sizeof(Configuration));

    // Initialize the newly allocated memory or handle malloc failure
    if (*config == NULL)
    {
        return L401_ERR_INTERNAL;
    }

    return L401_OK;
}

void config_default_init(Configuration *config)
{
    if (config == NULL)
    {
        return;
    }
    // Initialize with default values
    config->version = strdup(LIGHTMSG_VERSION);                          // Default version
    strncpy(config->text, LIGHTMSG_DEFAULT_TEXT, LIGHTMSG_MAX_TEXT_LEN); // Default text
    config->text[LIGHTMSG_MAX_TEXT_LEN + 1] = '\0';
    strncpy(config->bitmapPath, LIGHTMSG_DEFAULT_BITMAPPATH, LIGHTMSG_MAX_BITMAPPATH_LEN); // Default text
    config->bitmapPath[LIGHTMSG_MAX_BITMAPPATH_LEN + 1] = '\0';
    config->color = LIGHTMSG_DEFAULT_COLOR;             // Default color
    config->brightness = LIGHTMSG_DEFAULT_BRIGHTNESS;   // Default brightness
    config->orientation = LIGHTMSG_DEFAULT_ORIENTATION; // Default orientation (e.g., false)
}

/**
 * @brief Converts an Configuration structure to a JSON string.
 *
 * This function takes a pointer to an Configuration structure and
 * converts its contents into a JSON formatted string. The generated
 * JSON string is dynamically allocated and should be freed by the caller.
 *
 * @param config Pointer to the Configuration structure to be converted.
 * @param jsontxt Pointer to a char pointer where the JSON string will be stored.
 *               The function allocates memory for this string, and it is
 *               the caller's responsibility to free it.
 *
 * @return l401_err An enumerated error code.
 *         - L401_OK on success.
 *         - L401_ERR_NULLPTR if input pointers are NULL.
 *         - L401_ERR_INTERNAL if an internal cJSON error occurs.
 */
l401_err config_to_json(Configuration *config, char **jsontxt)
{
    if (config == NULL)
    {
        return L401_ERR_NULLPTR;
    }

    // Create a new cJSON object
    cJSON *json = cJSON_CreateObject();
    if (json == NULL)
    {
        return L401_ERR_INTERNAL;
    }

    FURI_LOG_I(TAG, "[config_to_json] cJSON add");
    // Add items to the cJSON object
    cJSON_AddStringToObject(json, "version", config->version);
    cJSON_AddStringToObject(json, "text", config->text);
    cJSON_AddStringToObject(json, "bitmapPath", config->bitmapPath);
    cJSON_AddNumberToObject(json, "color", (double)config->color);
    // overrites brightness setting
    cJSON_AddNumberToObject(json, "brightness", LightMsg_BrightnessBlinding); // (double)config->brightness);
    cJSON_AddBoolToObject(json, "orientation", config->orientation);
    FURI_LOG_I(TAG, "[config_to_json] cJSON_Print");

    // Convert cJSON object to string
    char *string = cJSON_Print(json);
    if (string == NULL)
    {
        cJSON_Delete(json);
        return L401_ERR_INTERNAL;
    }

    // Assign the string to the output
    *jsontxt = string;
    FURI_LOG_I(TAG, "[config_to_json] cJSON_Delete");
    // Clean up
    cJSON_Delete(json);

    return L401_OK;
}

/**
 * @brief Parses a JSON string and populates an Configuration structure.
 *
 * This function takes a JSON formatted string and parses it to populate
 * an Configuration structure. The function assumes the JSON string
 * is properly formatted and contains the necessary fields. The caller
 * is responsible for ensuring that the passed structure is properly initialized.
 *
 * @param jsontxt The JSON string to parse.
 * @param config Pointer to the Configuration structure where the parsed data will be stored.
 *
 * @return l401_err An enumerated error code.
 *         - L401_OK on successful parsing and data extraction.
 *         - L401_ERR_NULLPTR if any of the input pointers are NULL.
 *         - L401_ERR_PARSE if there is an error in parsing the JSON string.
 *         - L401_ERR_MALFORMED if the JSON string does not contain the required fields or if they are incorrectly
 * formatted.
 */
l401_err json_to_config(char *jsontxt, Configuration *config)
{
    if (config == NULL || jsontxt == NULL)
    {
        return L401_ERR_NULLPTR;
    }

    cJSON *json = cJSON_Parse(jsontxt);
    if (json == NULL)
    {
        const char *error_ptr = cJSON_GetErrorPtr();
        if (error_ptr != NULL)
        {
            FURI_LOG_E(TAG, "cJSON Parse error: Error before: %s\n", error_ptr);
        }
        return L401_ERR_PARSE;
    }

    cJSON *json_version = cJSON_GetObjectItemCaseSensitive(json, "version");
    cJSON *json_text = cJSON_GetObjectItemCaseSensitive(json, "text");
    cJSON *json_bitmapPath = cJSON_GetObjectItemCaseSensitive(json, "bitmapPath");
    cJSON *json_color = cJSON_GetObjectItemCaseSensitive(json, "color");
    cJSON *json_brightness = cJSON_GetObjectItemCaseSensitive(json, "brightness");
    cJSON *json_orientation = cJSON_GetObjectItemCaseSensitive(json, "orientation");

    if (!cJSON_IsString(json_version) || !cJSON_IsString(json_text) || !cJSON_IsString(json_bitmapPath) ||
        !cJSON_IsNumber(json_color) || !cJSON_IsNumber(json_brightness) || !cJSON_IsBool(json_orientation))
    {
        cJSON_Delete(json);
        FURI_LOG_E(TAG, "Error: Malformed configuration");
        return L401_ERR_MALFORMED;
    }

    // Free existing memory if any
    free(config->version);
  //  free(config->text);

    config->version = strdup(json_version->valuestring);
    strncpy(config->text, json_text->valuestring, LIGHTMSG_MAX_TEXT_LEN);
    config->text[LIGHTMSG_MAX_TEXT_LEN + 1] = '\0';
    strncpy(config->bitmapPath, json_bitmapPath->valuestring, LIGHTMSG_MAX_BITMAPPATH_LEN);
    config->bitmapPath[LIGHTMSG_MAX_BITMAPPATH_LEN + 1] = '\0';
    // config->text = strdup(json_text->valuestring);
    config->color = (uint8_t)json_color->valuedouble;
    config->brightness = (uint8_t)json_brightness->valuedouble;
    config->orientation = cJSON_IsTrue(json_orientation) ? true : false;
    cJSON_Delete(json);
    return L401_OK;
}

l401_err config_save_json(const char *filename, Configuration *config)
{
    furi_assert(filename);
    furi_assert(config);
    char *jsontxt = NULL;
    size_t bytes = 0;
    size_t jsontxt_len = 0;
    FURI_LOG_I(TAG, "[config_save_json] config_to_json");

    l401_err res = config_to_json(config, &jsontxt);
    if (res != L401_OK)
    {
        FURI_LOG_E(TAG, "Error while converting conf to json: %d", (uint8_t)res);
        return res;
    }
    FURI_LOG_I(TAG, "Json: \n%s", jsontxt);

    jsontxt_len = strlen(jsontxt);
    FURI_LOG_I(TAG, "[config_save_json] furi_record_open");
    Storage *storage = furi_record_open(RECORD_STORAGE);
    FURI_LOG_I(TAG, "[config_save_json] storage_file_alloc");

    File *configuration_file = storage_file_alloc(storage);
    FURI_LOG_I(TAG, "[config_save_json] storage_file_open");
    if (!storage_file_open(configuration_file, filename, FSAM_WRITE, FSOM_CREATE_ALWAYS))
    {
        FURI_LOG_E(TAG, "Write failed \"%s\". Error: \'%s\'", filename,
                   storage_file_get_error_desc(configuration_file));
        res = L401_ERR_FILESYSTEM;
        goto cleanup;
    }
    else
    {
        bytes = storage_file_write(configuration_file, jsontxt, jsontxt_len);
        res = L401_OK;
    }

    if (bytes != jsontxt_len)
    {
        FURI_LOG_E(TAG, "Write failed \"%s\". Error: \'%s\'", filename,
                   storage_file_get_error_desc(configuration_file));
        res = L401_ERR_FILESYSTEM;
        goto cleanup;
    }

cleanup:
    FURI_LOG_I(TAG, "[config_save_json] Cleanup");
    storage_file_close(configuration_file);
    storage_file_free(configuration_file);
    free(jsontxt);
    furi_record_close(RECORD_STORAGE);
    return res;
}

l401_err config_read_json(const char *filename, Configuration *config)
{
    furi_assert(filename);
    furi_assert(config);
    Storage *storage = furi_record_open(RECORD_STORAGE);
    char *jsontxt = NULL;
    size_t bytes = 0;

    File *configuration_file = storage_file_alloc(storage);
    if (storage_file_open(configuration_file, filename, FSAM_READ, FSOM_OPEN_ALWAYS))
    {
        size_t configuration_file_size = storage_file_size(configuration_file);
        jsontxt = (char *)malloc(configuration_file_size + 1);
        bytes = storage_file_read(configuration_file, jsontxt, configuration_file_size);
        jsontxt[bytes] = '\0';
        FURI_LOG_I(TAG, "File content: %s %d/%d", jsontxt, bytes, configuration_file_size);
    }

    l401_err res = json_to_config(jsontxt, config);
    if (res != L401_OK)
    {
        FURI_LOG_E(TAG, "Error while getting JSON from %s. %d", filename, res);
    }

    storage_file_close(configuration_file);
    free(jsontxt);
    furi_record_close(RECORD_STORAGE);
    return res;
}

l401_err config_init_dir(const char *filename)
{
    Storage *storage = furi_record_open(RECORD_STORAGE);
    FuriString *configuration_dirname = furi_string_alloc();
    path_extract_dirname(filename, configuration_dirname);
    FURI_LOG_I(TAG, "File name: %s", filename);
    FURI_LOG_I(TAG, "Dirname: %s", furi_string_get_cstr(configuration_dirname));
    if (storage_common_stat(storage, furi_string_get_cstr(configuration_dirname), NULL) == FSE_NOT_EXIST)
    {
        FURI_LOG_I(TAG, "Directory doesn't exist. Will create new.");
        if (!storage_simply_mkdir(storage, furi_string_get_cstr(configuration_dirname)))
        {
            FURI_LOG_E(TAG, "Error creating directory %s", furi_string_get_cstr(configuration_dirname));
            return L401_ERR_FILESYSTEM;
        }
    }

    furi_string_free(configuration_dirname);
    furi_record_close(RECORD_STORAGE);
    return L401_OK;
}

l401_err config_load_json(const char *filename, Configuration *config)
{
    furi_assert(filename);
    furi_assert(config);
    FURI_LOG_I(TAG, "Before loading:");

    l401_err res = config_init_dir(filename);
    if (res != L401_OK)
    {
        FURI_LOG_E(TAG, "Error while loading from %s: %d", filename, res);
    }

    Storage *storage = furi_record_open(RECORD_STORAGE);
    // Check if configuration file exists
    if (!storage_common_stat(storage, filename, NULL) == FSE_OK)
    {
        FURI_LOG_I(TAG, "Config file is not found. Will create new.");
        config_default_init(config);
        FURI_LOG_I(TAG, "Save JSON to %s", filename);
        res = config_save_json(filename, config);
        if (res != L401_OK)
        {
            FURI_LOG_E(TAG, "Error while saving default configuration to %s: %d", filename, res);
        }
    }
    furi_record_close(RECORD_STORAGE);

    res = config_read_json(filename, config);
    if (res != L401_OK)
    {
        FURI_LOG_E(TAG, "Could not get configuration from %s: %d", filename, res);
    }
    FURI_LOG_I(TAG, "After loading:");
    return res;
}
