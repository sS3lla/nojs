#include <lexer.hpp>
#include <token.hpp>
#include <iostream>

namespace Lexer {
    Token::Token(size_t line_number, Token_type token_type) :
        line_number(line_number),
        token_type(token_type)
    {}
}