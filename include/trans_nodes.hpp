#pragma once

#include <vector>
#include <string>

#include "token.hpp"

namespace Lexer
{
    class Trans_Node
    //A single node in the DFA for lexing
    {
    public:
        Trans_Node();
        Trans_Node(std::string accept_chars, std::string trans_chars, 
        Token::Token_type emit_token);

        //Accepted chars
        std::string accept_chars;

        //Chars that are used for transistioning
        std::string trans_chars;

        //The token that will be emited on success
        Token::Token_type emit_token;
        
        size_t get_node_amount();
        void add_node(Trans_Node *node);
    private:
        //Nodes connected to this one
        std::vector<Trans_Node*> connected_nodes;
    }; 
}
