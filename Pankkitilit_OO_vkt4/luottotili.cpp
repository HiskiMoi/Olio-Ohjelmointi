#include "Luottotili.h"
#include <iostream>

Luottotili::Luottotili(const std::string& nimi, double raja)
    : Pankkitili(nimi), luottoRaja(raja) {
    saldo = 0;
    std::cout << "Luottotili luotu " << omistaja
              << ":lle, luottoraja " << luottoRaja << "\n";
}

bool Luottotili::deposit(double summa) {
    if (summa <= 0)
        return false;

    saldo += summa;
    if (saldo > 0)
        saldo = 0;

    std::cout << "Luottotili: maksu " << summa
              << " tehty, luottoa jaljella "
              << getLuottoJaljella() << "\n";
    return true;
}

bool Luottotili::withdraw(double summa) {
    if (summa <= 0 || saldo - summa < -luottoRaja)
        return false;

    saldo -= summa;

    std::cout << "Luottotili: nosto " << summa
              << " tehty, luottoa jaljella "
              << getLuottoJaljella() << "\n";
    return true;
}

double Luottotili::getLuottoJaljella() const {
    return luottoRaja + saldo;
}
