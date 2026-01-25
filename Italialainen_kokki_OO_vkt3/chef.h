#ifndef CHEF_H
#define CHEF_H

#include <string>
using namespace std;

class Chef
{
protected:
    string chefName;

public:
    Chef(string name);
    virtual ~Chef();

    string getName();
    int makeSalad(int items);
    int makeSoup(int items);
};

#endif
