#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "windows.h"
#include "extraction-deck.h"

using namespace std;

int main(int argc, char *argv[])
{
    ExtractionDeck extractionDeck;
    extractionDeck.initializeDeck();
    extractionDeck.shuffleCards();
    cout << "Extraction Initialized and shuffled (size) : " << extractionDeck.size() << endl;
    while (!extractionDeck.isEmpty())
    {
        extractionDeck.pop();
    }
    cout << "Extraction Empty(size) : " << extractionDeck.size() << endl;
    Deck deck;
    deck.initializeDeck();
    extractionDeck.push(deck);

    cout << "Printing the 'pushed' deck (Fileld Deck):" << endl;
    extractionDeck.print();
    cout << "___________________________ :" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}