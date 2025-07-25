/*
 * Exercice: Grains de Blé
 *
 * Sur un échiquier de 64 cases, le nombre de grains double à chaque case.
 * Case 1 : 1 grain, case 2 : 2 grains, case 3 : 4 grains, etc.
 * L'objectif est de calculer le nombre de grains sur une case donnée
 * ainsi que le total de grains sur tout l'échiquier.
 */

#include "grains.h"
#include <math.h>

/* Nombre de grains sur la case d'indice index (1 à 64) */
uint64_t square(uint8_t index) {
    return (uint64_t)pow(2, index - 1); // 2^(index-1)
}

/* Total des grains sur l'ensemble de l'échiquier */
uint64_t total(void) {
    uint64_t somme = 0;
    for (int i = 1; i <= 64; i++) {
        somme += square(i); // ajoute le nombre de grains de chaque case
    }
    return somme;
}
