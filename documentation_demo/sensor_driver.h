/**
 * @file sensor_driver.h
 * @brief Virtuelle Sensor-Schnittstelle zu Demonstrationszwecken.
 */

#ifndef SENSOR_DRIVER_H
#define SENSOR_DRIVER_H

#include <stdint.h>
#include <stdbool.h>

/**
 * @brief Statuscodes für Sensoroperationen.
 */
typedef enum
{
    SENSOR_OK = 0,           /**< Operation erfolgreich */
    SENSOR_ERR_NOT_INIT,     /**< Sensor nicht initialisiert */
    SENSOR_ERR_TIMEOUT,      /**< Kommunikations-Timeout */
    SENSOR_ERR_INVALID_PARAM /**< Ungültiger Parameter übergeben */
} SensorStatus_t;

/**
 * @brief Initialisiert den Sensortreiber.
 *
 * @return SensorStatus_t SENSOR_OK bei Erfolg, ansonsten ein Fehlercode.
 */
SensorStatus_t sensor_init(void);

/**
 * @brief Liest die aktuelle Temperatur vom Sensor aus.
 *
 * @param[out] temperature Zeiger auf die Variable zum Speichern der Temperatur in Grad Celsius.
 * @return SensorStatus_t SENSOR_OK bei Erfolg, ansonsten ein Fehlercode.
 */
SensorStatus_t sensor_read_temperature(float *temperature);

#endif /* SENSOR_DRIVER_H */