#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

#include "Pankkitili.h"

class Luottotili : public Pankkitili {
private:
    double luottoRaja;

public:
    Luottotili(const std::string& nimi, double raja);

    bool deposit(double summa) override;
    bool withdraw(double summa) override;

    double getLuottoJaljella() const;
};

#endif
