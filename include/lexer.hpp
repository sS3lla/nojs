#pragma once

#include <string>
#include <vector>

#include "trans_nodes.hpp"

namespace Lexer
{
    class Lexer
    {
    public:
        Trans_Node *start_node;
        Trans_Node *current_node;
        std::vector<Token> run_lexer(std::string string);
        Lexer(Trans_Node *start_node);
        Lexer();
    };    
}
