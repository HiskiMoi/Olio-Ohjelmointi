#ifndef PANKKITILI_H
#define PANKKITILI_H

#include <string>

class Pankkitili {
protected:
    std::string omistaja;
    double saldo;

public:
    Pankkitili(const std::string& nimi);

    virtual bool deposit(double summa);
    virtual bool withdraw(double summa);

    double getBalance() const;

    virtual ~Pankkitili();
};

#endif
