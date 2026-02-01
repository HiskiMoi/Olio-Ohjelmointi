#include "Asiakas.h"
#include <iostream>

int main() {
    Asiakas a1("Aapeli", 1000);

    a1.showSaldo();
    a1.talletus(250);
    a1.luotonNosto(150);
    a1.showSaldo();

    Asiakas a2("Bertta", 1000);
    a2.showSaldo();

    std::cout << "Aapeli\n";
    a1.showSaldo();

    a1.tiliSiirto(50, a2);

    std::cout << "Bertta\n";
    a2.showSaldo();

    return 0;
}
