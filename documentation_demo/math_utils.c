/**
 * @file math_utils.c
 * @brief Implementierung der mathematischen Hilfsfunktionen.
 */

#include "math_utils.h"
#include <math.h>

float math_distance(const Vector2D *v1, const Vector2D *v2)
{
    if (!v1 || !v2)
    {
        return 0.0f;
    }
    float dx = v1->x - v2->x;
    float dy = v1->y - v2->y;
    return sqrtf(dx * dx + dy * dy);
}

float math_clamp(float value, float min, float max)
{
    if (value < min)
        return min;
    if (value > max)
        return max;
    return value;
}