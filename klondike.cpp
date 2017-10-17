#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include "windows.h"
#include "extraction-deck.h"

using namespace std;

int main(int argc, char *argv[])
{
    ExtractionDeck extractionDeck;
    extractionDeck.push(Card(Face::ACE, Suite::DIAMONDS));
    extractionDeck.push(Card(Face::KING, Suite::DIAMONDS));


    cout << "\n___________________________ :" << endl;
    cout << "Printing deck: "  << endl;
    extractionDeck.print();
    cout << "___________________________ :" << endl;


    extractionDeck.getTop().print();
    extractionDeck.pop();

    cout << "\n___________________________ :" << endl;
    cout << "Printing deck:" << endl;
    extractionDeck.print();
    cout << "___________________________ :" << endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}