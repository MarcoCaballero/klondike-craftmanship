#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "windows.h"
#include "construction-deck.h"

using namespace std;

int main(int argc, char *argv[])
{
    Deck mainDesk;
    Deck wasteDesk;

    mainDesk.initializeDeck();
    mainDesk.shuffleCards();

    cout << "Top Card:" << mainDesk.getTop().toReadableString();
    cout << "Back Card:" << mainDesk.getBack().toReadableString();

    ConstructionDeck deck_one = ConstructionDeck(7);
    for (unsigned i = 0; i < 7; i++)
    {
        deck_one.push(mainDesk.throwAndReturnCard());
        // mainDesk.throwAndReturnCard().print();
    }

    cout << "\n______________KLONDIKE-GAME_______________\n" << endl;
    cout << "||" << "(" << mainDesk.size() - 1 << ") " << mainDesk.getTop().toReadableString() << "||";

    deck_one.print();

    system("PAUSE");
    return EXIT_SUCCESS;
}