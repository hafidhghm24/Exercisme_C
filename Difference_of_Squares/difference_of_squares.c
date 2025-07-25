/*
 * Exercice: Différence des Carrés
 *
 * Calculer la différence entre le carré de la somme et la somme des carrés
 * des N premiers nombres naturels.
 */

#include "difference_of_squares.h"
#include <math.h>

/* Renvoie (1 + 2 + ... + number)^2 */
unsigned int square_of_sum(unsigned int number) {
    unsigned int somme = 0;
    for (unsigned int i = 1; i <= number; i++) {
        somme += i; // accumule les valeurs de 1 à number
    }
    return pow(somme, 2); // élève la somme au carré
}

/* Renvoie 1^2 + 2^2 + ... + number^2 */
unsigned int sum_of_squares(unsigned int number) {
    unsigned int somme = 0;
    for (unsigned int j = 1; j <= number; j++) {
        somme += pow(j, 2); // ajoute le carré de j
    }
    return somme;
}

/* Différence entre le carré de la somme et la somme des carrés */
unsigned int difference_of_squares(unsigned int number) {
    unsigned int sos = sum_of_squares(number);
    unsigned int sqs = square_of_sum(number);
    return sqs - sos; // renvoie la différence calculée
}
