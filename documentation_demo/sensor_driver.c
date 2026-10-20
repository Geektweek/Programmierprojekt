/**
 * @file sensor_driver.c
 * @brief Implementierung des virtuellen Sensortreibers.
 */

#include "sensor_driver.h"

static bool is_initialized = false;

SensorStatus_t sensor_init(void)
{
    is_initialized = true;
    return SENSOR_OK;
}

SensorStatus_t sensor_read_temperature(float *temperature)
{
    if (!is_initialized)
    {
        return SENSOR_ERR_NOT_INIT;
    }
    if (!temperature)
    {
        return SENSOR_ERR_INVALID_PARAM;
    }

    // Simulierte Temperaturmessung
    *temperature = 23.5f;
    return SENSOR_OK;
}