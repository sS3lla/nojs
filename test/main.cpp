#include <stdio.h>
#include <stdlib.h>
#include "token.hpp"

#define FILE_SIZE 2048

int main(int argc, char const *argv[])
{  
    Lexer::Token* tok = new Lexer::Token((size_t)21, (Lexer::Token::Token_type)0);

    return 0;
}
