#pragma once

#include <string>

#define VM_STACK_SIZE 512

class Nojs_VM
{
private:
    int m_stack[VM_STACK_SIZE];
    int m_instruction_pointer;

    std::string m_log_prefix = "VM -- ";

    int m_alive = 0;

public:
    Nojs_VM();
    ~Nojs_VM();

    int is_alive();
    void exec_bytecode(std::string bytecode);
    
};