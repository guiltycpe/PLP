#include <stdio.h>
#include "controle.h"

void controle() {
    int i;

    printf("Divisibles par 4 mais pas par 6:\n");
    for (i = 1; i <= 1000; i++) {
        if (i % 4 == 0 && i % 6 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Pairs et divisibles par 8:\n");
    for (i = 1; i <= 1000; i++) {
        if (i % 2 == 0 && i % 8 == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");

    printf("Divisibles par 5 ou 7 mais pas par 10:\n");
    for (i = 1; i <= 1000; i++) {
        if ((i % 5 == 0 || i % 7 == 0) && i % 10 != 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}
