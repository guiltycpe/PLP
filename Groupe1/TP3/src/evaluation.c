#include "evaluation.h"
#include <stdio.h>
#include <stdlib.h>

double evaluer_expression(Expression expr) {
    double op1 = atof(expr.operand1);
    double op2 = atof(expr.operand2);
    double result = 0.0;

    switch (expr.operation) {
        case '+':
            result = op1 + op2;
            break;
        case '-':
            result = op1 - op2;
            break;
        case '*':
            result = op1 * op2;
            break;
        case '/':
            if (op2 == 0) {
                printf("Erreur : division par zéro\n");
                return 0.0;
            }
            result = op1 / op2;
            break;
        default:
            printf("Erreur : opération inconnue\n");
            return 0.0;
    }

    return result;
}

int main() {
    const char *input = "3.5 * 2";
    const char *p = input;
    Token tokens[256];
    int token_count = 0;

    Token token;
    while ((token = get_next_token(&p)).type != TOKEN_END) {
        tokens[token_count++] = token;
    }

    Expression expr = parse_expression(tokens, token_count);
    if (expr.operation != '\0') {
        double result = evaluer_expression(expr);
        printf("Résultat : %f\n", result);
    }

    return 0;
}