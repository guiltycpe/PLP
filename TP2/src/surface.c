#include <math.h>
#include "sphere.h"

/*
* surface.c
*
 * Objectif :
* Calculer la surface d'une sphère
*
 * Auteur :
* Rayane MERLIN
 */

// Fonction pour calculer la surface d'une sphère
float calculer_surface(float rayon) {
    return 4 * M_PI * pow(rayon, 2);
}
