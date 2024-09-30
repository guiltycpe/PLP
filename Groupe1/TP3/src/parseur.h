#ifndef PARSEUR_H
#define PARSEUR_H

#include "lexer.h"

typedef struct {
    char operation;
    char operand1[256];
    char operand2[256];
} Expression;

Expression parse_expression(const Token *tokens, int token_count);

#endif // PARSEUR_H