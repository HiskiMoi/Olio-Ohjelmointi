#ifndef ASIAKAS_H
#define ASIAKAS_H

#include <string>
#include "Pankkitili.h"
#include "Luottotili.h"

class Asiakas {
private:
    std::string nimi;
    Pankkitili pankkitili;
    Luottotili luottotili;

public:
    Asiakas(const std::string& nimi, double luottoRaja);

    std::string getNimi() const;

    void showSaldo() const;

    bool talletus(double summa);
    bool nosto(double summa);

    bool luotonMaksu(double summa);
    bool luotonNosto(double summa);

    bool tiliSiirto(double summa, Asiakas& vastaanottaja);
};

#endif
