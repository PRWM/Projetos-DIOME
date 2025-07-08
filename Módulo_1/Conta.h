// Conta.h
#ifndef CONTA_H
#define CONTA_H

#include <string>

class Conta
{
protected:
    double saldo;
    std::string tipo;

public:
    Conta(double saldoInicial, std::string tipoConta) : saldo(saldoInicial), tipo(tipoConta) {}
    virtual bool sacar(double valor);
    double getSaldo() const;
    std::string getTipo() const;
};


class ContaCorrente : public Conta
{
public:
    ContaCorrente(double saldo) : Conta(saldo, "Corrente") {}
};


class ContaPoupanca : public Conta
{
public:
    ContaPoupanca(double saldo) : Conta(saldo, "Poupança") {}
};


class ContaSalario : public Conta
{
public:
    ContaSalario(double saldo) : Conta(saldo, "Salário") {}
};


class ContaInvestimento : public Conta
{
public:
    ContaInvestimento(double saldo) : Conta(saldo, "Investimento") {}
};

#endif

