// Conta.cpp
#include "Conta.h"

bool Conta::sacar(double valor)
{
    if (saldo >= valor)
    {
        saldo -= valor;
        return true;
    }
    return false;
}

double Conta::getSaldo() const
{
    return saldo;
}

std::string Conta::getTipo() const
{
    return tipo;
}



