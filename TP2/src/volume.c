#include <math.h>
#include "sphere.h"

/*
* volume.c
*
 * Objectif :
* Calculer le volume d'une sphère
*
 * Auteur :
* Rayane MERLIN
 */

// Fonction pour calculer le volume d'une sphère
float calculer_volume(float rayon) {
    return (4.0 / 3.0) * M_PI * pow(rayon, 3);
}
