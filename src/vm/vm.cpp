#include "vm.hpp"

#include <iostream>
#include <string>
#include "utils.hpp"

Nojs_VM::Nojs_VM() {
    m_alive = 1;
    CLASS_LOG("Initiated");
}

Nojs_VM::~Nojs_VM() {
    m_alive = 0;
    CLASS_LOG("Shutting Down");
}

// executes bytecode instructions
void Nojs_VM::exec_bytecode(std::string bytecode) {
    
}

int Nojs_VM::is_alive() {
    return m_alive;
}