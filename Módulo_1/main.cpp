// main.cpp
#include "Conta.h"
#include <iostream>

int main()
{
    ContaCorrente cc(500);
    ContaPoupanca cp(300);

    cc.sacar(100);     // OK
    cp.sacar(400);     // Log de erro

    return 0;
}
