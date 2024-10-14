#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

/*
* parse_postfix.c
*
 * Objectif :
* Fonction qui prend en entrée une chaîne de caractères représentant une expression arithmétique en notation infixée
* et retourne une chaîne de caractères représentant la même expression en notation postfixée.
*
 * Auteur :
* Mohamed AIT EL HADJ
 */

int priority(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return 0;
    }
}

char *parse_postfix(char *infix) {
    Pile postfix;
    initPile(&postfix);
    int i = 0, j = 0;
    char *result = (char *)malloc(sizeof(char) * 100);

    while (infix[i] != '\0') {
        if (infix[i] >= '0' && infix[i] <= '9') {
            result[j] = infix[i];
            j++;
            i++;
        } else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/') {
            char op = sommet(&postfix);
            if (!estVide(&postfix) || priority(op) >= priority(infix[i])) {
                empiler(&postfix, infix[i]);
            } else {
                while (!estVide(&postfix) && priority(op) >= priority(infix[i])) {
                    result[j] = depiler(&postfix);
                    j++;
                }
            }
            i++;
        } else {
            printf("Caractère non reconnu.\n");
        }
    }

    while (!estVide(&postfix)) {
        result[j] = depiler(&postfix);
        j++;
    }
    result[j] = '\0';

    return result;
}

int main() {
    char infix[] = "2+3*4-5";
    char *postfix = parse_postfix(infix);
    printf("Infix: %s\n", infix);
    printf("Postfix: %s\n", postfix);
    free(postfix);
    return 0;
}