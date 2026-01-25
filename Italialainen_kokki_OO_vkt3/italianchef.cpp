#include "italianchef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string name) : Chef(name)
{
    cout << "ItalianChef " << chefName << " konstruktori" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << chefName << " destruktori" << endl;
}

bool ItalianChef::askSecret(string pwd, int flour, int water)
{
    if (pwd == password)
    {
        cout << "Password ok!" << endl;
        makePizza(flour, water);
        return true;
    }
    else
    {
        cout << "Wrong password!" << endl;
        return false;
    }
}

int ItalianChef::makePizza(int flour, int water)
{
    int pizzas = min(flour / 5, water / 5);

    cout << "ItalianChef " << chefName
         << " with " << flour << " flour and "
         << water << " water can make "
         << pizzas << " pizzas" << endl;

    return pizzas;
}
