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

#include "resistor_color.h"

/* Renvoie la valeur numérique associée à la couleur passée en paramètre */
uint16_t color_code(resistor_band_t code){
    return (uint16_t)code; // conversion explicite de l'énumération en entier
}

/* Fournit la liste de toutes les couleurs de l'énumération */
const resistor_band_t* colors(void){
    static const resistor_band_t colors[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    }; // tableau statique contenant les couleurs
    return colors; // renvoie le pointeur vers le tableau
}
