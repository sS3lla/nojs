#include "vm.hpp"
#include <iostream>

Nojs_VM::Nojs_VM() {
    std::cout << "VM -- " << "Initiated" << std::endl;
}

Nojs_VM::~Nojs_VM() {
    std::cout << "VM -- " << "Shutting Down" << std::endl;
}

void Nojs_VM::exec_bytecode() {
    
}