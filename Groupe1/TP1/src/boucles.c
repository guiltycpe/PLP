#include <stdio.h>
#include "boucles.h"

void for_triangle() {
    int compteur, i, j;
    printf("Entrez la taille du triangle : ");
    scanf("%d", &compteur);

    for (i = 1; i <= compteur; i++) {
        for (j = 1; j <= i; j++) {
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
        }
        printf("\n");
    }
}

void while_triangle() {
    int compteur, i = 1, j;
    printf("Entrez la taille du triangle : ");
    scanf("%d", &compteur);

    while (i <= compteur) {
        j = 1;
        while (j <= i) {
            if (i == 1 || i == compteur || j == 1 || j == i) {
                printf("* ");
            } else {
                printf("# ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
}

