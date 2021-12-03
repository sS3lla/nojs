#include "interpreter.hpp"

#include <iostream>
#include "utils.hpp"

Interpreter::Interpreter() {
    // m_lexer = new Lexer::Lexer();
    m_vm = new Nojs_VM();

    if (
        m_vm->is_alive() // &&
        // m_lexer.is_alive()
    ) {
        CLASS_LOG("\e[1;32mStarted NoJS successfully\e[0m")
        return;
    }
    CLASS_ERROR("Failed to start NoJS interpreter")
};


Interpreter::~Interpreter() {
    // delete m_lexer;
    delete m_vm;
};