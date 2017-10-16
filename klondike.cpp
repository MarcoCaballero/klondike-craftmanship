#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "windows.h"
#include "deck.h"

using namespace std;

int main(int argc, char *argv[])
{
    Deck deck;
    deck.initializeDeck();
    // cout << " The initialized deck: " << static_cast<int>(card.getValue()) << "\nfrom : " << static_cast<int>(card.getSuite()) << "\n then is red? " << card.isRed() << endl;
    cout << "Printing the initialized deck :" << endl;
    deck.print();
    cout << "___________________________ :" << endl;

    deck.shuffleCards();
    cout << "Printing the shuffled deck :" << endl;
    deck.print();
    cout << "___________________________ :" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}