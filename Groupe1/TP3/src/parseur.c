#include "parseur.h"
#include <stdio.h>
#include <string.h>

Expression parse_expression(const Token *tokens, int token_count) {
    Expression expr = {'\0', "", ""};

    if (token_count < 3) {
        printf("Erreur de syntaxe : expression incomplète\n");
        return expr;
    }

    if (tokens[0].type != TOKEN_NUMBER) {
        printf("Erreur de syntaxe : opérande 1 invalide\n");
        return expr;
    }

    if (tokens[1].type != TOKEN_OPERATOR) {
        printf("Erreur de syntaxe : opérateur invalide\n");
        return expr;
    }

    if (tokens[2].type != TOKEN_NUMBER) {
        printf("Erreur de syntaxe : opérande 2 invalide\n");
        return expr;
    }

    strcpy(expr.operand1, tokens[0].value);
    expr.operation = tokens[1].value[0];
    strcpy(expr.operand2, tokens[2].value);

    return expr;
}

int main() {
    const char *input = "3 + 5";
    const char *p = input;
    Token tokens[256];
    int token_count = 0;

    Token token;
    while ((token = get_next_token(&p)).type != TOKEN_END) {
        tokens[token_count++] = token;
    }

    Expression expr = parse_expression(tokens, token_count);
    if (expr.operation != '\0') {
        printf("Opération : %c\n", expr.operation);
        printf("Opérande 1 : %s\n", expr.operand1);
        printf("Opérande 2 : %s\n", expr.operand2);
    }

    return 0;
}