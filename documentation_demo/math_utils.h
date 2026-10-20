/**
 * @file math_utils.h
 * @brief Header für mathematische Hilfsfunktionen und Strukturen.
 * @author Doxygen Demo
 * @date 2026
 */

#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/**
 * @brief Repräsentiert einen 2D-Vektor.
 */
typedef struct
{
    float x; /**< X-Koordinate des Vektors */
    float y; /**< Y-Koordinate des Vektors */
} Vector2D;

/**
 * @brief Berechnet den euklidischen Abstand zwischen zwei 2D-Vektoren.
 *
 * @param v1 Zeiger auf den ersten Vektor.
 * @param v2 Zeiger auf den zweiten Vektor.
 * @return float Der euklidische Abstand.
 */
float math_distance(const Vector2D *v1, const Vector2D *v2);

/**
 * @brief Begrenzt einen Wert auf einen bestimmten Bereich (Clamping).
 *
 * @param value Der zu prüfende Wert.
 * @param min Untere Grenze.
 * @param max Obere Grenze.
 * @return float Der begrenzte Wert.
 */
float math_clamp(float value, float min, float max);

#endif /* MATH_UTILS_H */