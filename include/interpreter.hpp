/*
    This header file provides an easy to use Interpreter class for straight-forward code execution.
    It also exposes most useful Classes & Methods from the execution chain such as the Lexer/Transition nodes, AST, Parser and the Virtual Machine.
*/

#pragma once

#include "lexer.hpp"
#include "token.hpp"
#include "vm.hpp"

// To be properly implemented
// It is an abstraction, so it will facilitate the small intermidiate steps (mapping output to input) between lex -> parse -> interpreter.
// This is so the user can just include the library and do something like, 
// Interpreter interpreter(params); interpreter.runCode(code) or interpreter.runFile(relFileLocation)
class Interpreter
{
private:
    Lexer::Lexer* m_lexer;
    Nojs_VM* m_vm;

    std::string m_log_prefix = "Interpreter -- ";

    
public:
    Interpreter();
    ~Interpreter();
};