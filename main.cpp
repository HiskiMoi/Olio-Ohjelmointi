#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int game(int maxnum){

    int sluku;
    int arvaus = 0;

    srand(time(0));
    int luku = rand() % maxnum;

    while (true){
        cout << "Arvaa satunnaisluku 1-" << maxnum << endl;
        cin >> sluku;
        arvaus++;

        if (sluku == luku){
            cout << "Oikein, peli loppuu!" << endl;
            cout << "Arvauksia: " << arvaus << endl;
            return arvaus;
        }
        else if (sluku > luku){
            cout << "Arvauksesi on liian suuri, kokeile uudestaan" << endl;
        }
        else {
            cout << "Arvauksesi on liian pieni, kokeile uudestaan" << endl;
        }
    }

}


int main()
{
    int maxnum;
    cout << "Anna maksimi numero, jonka valilta haluat arvata: " << endl;
    cin >> maxnum;
    int luku = game(maxnum);
    return 0;
}
