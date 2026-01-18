#include <iostream>
#include "Game.h"

using namespace std;

int main() {
    int maxNumber;

    cout << "Give maximum value: ";
    cin >> maxNumber;

    Game game(maxNumber);
    game.play();

    return 0;
}
