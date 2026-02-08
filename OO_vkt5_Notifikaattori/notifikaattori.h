#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H

#include "Seuraaja.h"
#include <string>

class Notifikaattori {
private:
    Seuraaja* seuraajat = nullptr;

public:
    Notifikaattori();

    void lisaa(Seuraaja* s);
    void poista(Seuraaja* s);
    void tulosta();
    void postita(std::string viesti);
};

#endif

