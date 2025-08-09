#ifndef RESISTOR_COLOR_H
#define RESISTOR_COLOR_H

/*
 * Exercice : Code des résistances
 *
 * Pour déterminer la valeur d'une résistance, on utilise un code de couleurs.
 * Chaque couleur correspond à un chiffre de 0 à 9 :
 * noir=0, marron=1, rouge=2, orange=3, jaune=4,
 * vert=5, bleu=6, violet=7, gris=8, blanc=9.
 *
 * Objectifs :
 *  - obtenir la valeur numérique associée à une couleur donnée
 *  - lister toutes les couleurs disponibles
 */

#include <stdint.h>

/* Enumération des bandes de couleurs avec leur valeur associée */
typedef enum {
    BLACK = 0,
    BROWN = 1,
    RED = 2,
    ORANGE = 3,
    YELLOW = 4,
    GREEN = 5,
    BLUE = 6,
    VIOLET = 7,
    GREY = 8,
    WHITE = 9
} resistor_band_t;

/* Retourne la valeur numérique associée à une couleur donnée */
uint16_t color_code(resistor_band_t code);

/* Renvoie un tableau contenant toutes les couleurs disponibles */
const resistor_band_t* colors(void);

#endif
