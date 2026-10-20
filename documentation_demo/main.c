/**
 * @file main.c
 * @brief Hauptprogramm für die Doxygen-Demo.
 */

#include <stdio.h>
#include "math_utils.h"
#include "sensor_driver.h"

/**
 * @brief Haupteinstiegspunkt der Anwendung.
 *
 * @param argc Anzahl der Kommandozeilenargumente.
 * @param argv Array der Kommandozeilenargumente.
 * @return int Rückgabecode (0 bei Erfolg).
 */
int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;

    printf("Starte Doxygen Demo...\n");

    if (sensor_init() == SENSOR_OK)
    {
        float temp = 0.0f;
        if (sensor_read_temperature(&temp) == SENSOR_OK)
        {
            printf("Sensor Temperatur: %.2f C\n", temp);
        }
    }

    Vector2D p1 = {0.0f, 0.0f};
    Vector2D p2 = {3.0f, 4.0f};
    float dist = math_distance(&p1, &p2);
    printf("Abstand zwischen Punkten: %.2f\n", dist);

    return 0;
}