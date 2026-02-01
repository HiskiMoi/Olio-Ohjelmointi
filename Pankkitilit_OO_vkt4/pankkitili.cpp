#include "Pankkitili.h"
#include <iostream>

Pankkitili::Pankkitili(const std::string& nimi)
    : omistaja(nimi), saldo(0.0) {
    std::cout << "Pankkitili luotu " << omistaja << ":lle\n";
}

bool Pankkitili::deposit(double summa) {
    if (summa <= 0)
        return false;

    saldo += summa;
    std::cout << "Pankkitili: talletus " << summa << " tehty\n";
    return true;
}

bool Pankkitili::withdraw(double summa) {
    if (summa <= 0 || summa > saldo)
        return false;

    saldo -= summa;
    std::cout << "Pankkitili: nosto " << summa << " tehty\n";
    return true;
}

double Pankkitili::getBalance() const {
    return saldo;
}

Pankkitili::~Pankkitili() {}
