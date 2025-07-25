/*
 * Exercice: Année Bissextile
 *
 * Déterminer si une année est bissextile selon les règles suivantes :
 * - une année divisible par 4 est potentiellement bissextile;
 * - sauf si elle est également divisible par 100, auquel cas elle ne l'est pas,
 *   à moins d'être divisible par 400.
 */

#include "leap.h"
#include <stdbool.h>

/*
 * Renvoie true si l'année est bissextile, false sinon.
 */
bool leap_year(int year) {
    if (year % 4 != 0) {
        return false; // pas divisible par 4 => pas bissextile
    } else if (year % 100 == 0 && year % 400 != 0) {
        return false; // divisible par 100 mais pas par 400 => pas bissextile
    } else {
        return true;  // toutes les autres années divisibles par 4 => bissextiles
    }
}
