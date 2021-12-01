#include "trans_nodes.hpp"

namespace Lexer {
    void Trans_Node::add_node(Trans_Node *node){
        connected_nodes.push_back(node);
    }
    size_t Trans_Node::get_node_amount(){
        return this->connected_nodes.size();
    }
}