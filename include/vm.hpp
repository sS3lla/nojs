#pragma once

#define VM_STACK_SIZE 512

class Nojs_VM
{
private:
    int stack[VM_STACK_SIZE];

public:
    Nojs_VM();
    ~Nojs_VM();

    void exec_bytecode();
};
