#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"
#include <string>

class ItalianChef : public Chef
{
private:
    string password = "pizza";
    int flour;
    int water;

    int makePizza(int flour, int water);

public:
    ItalianChef(string name);
    ~ItalianChef();

    bool askSecret(string pwd, int flour, int water);
};

#endif
