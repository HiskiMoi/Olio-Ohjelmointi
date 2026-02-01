#include "Asiakas.h"
#include <iostream>

Asiakas::Asiakas(const std::string& nimi, double luottoRaja)
    : nimi(nimi),
    pankkitili(nimi),
    luottotili(nimi, luottoRaja) {
    std::cout << "Asiakkuus luotu " << nimi << "\n\n";
}

std::string Asiakas::getNimi() const {
    return nimi;
}

void Asiakas::showSaldo() const {
    std::cout << "Kayttotilin saldo " << pankkitili.getBalance() << "\n";
    std::cout << "Luottotilin saldo " << luottotili.getLuottoJaljella() << "\n\n";
}

bool Asiakas::talletus(double summa) {
    return pankkitili.deposit(summa);
}

bool Asiakas::nosto(double summa) {
    return pankkitili.withdraw(summa);
}

bool Asiakas::luotonMaksu(double summa) {
    return luottotili.deposit(summa);
}

bool Asiakas::luotonNosto(double summa) {
    return luottotili.withdraw(summa);
}

bool Asiakas::tiliSiirto(double summa, Asiakas& vastaanottaja) {
    std::cout << "Pankkitili: " << nimi
              << " siirtaa " << summa
              << " " << vastaanottaja.nimi << ":lle\n";

    if (!pankkitili.withdraw(summa))
        return false;

    vastaanottaja.pankkitili.deposit(summa);

    std::cout << nimi << " Pankkitili: nosto " << summa << " tehty "
              << vastaanottaja.nimi << " Pankkitili: talletus "
              << summa << " tehty\n\n";

    return true;
}
