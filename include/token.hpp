#pragma once

namespace Lexer{

    class Token
    //This could probably be best implemented as a struct
    {
    public:
        enum class Token_type{ 
            DIGIT, 
            LITERAL,
            INVALID,
            ERROR 
        };
        size_t line_number;
        Token_type token_type;
        Token(size_t line_number, Token_type token_type);
    };
}