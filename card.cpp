#include <iostream>
#include "card.h"

using namespace std;

Card::Card()
{
}

Card::Card(Face face, Suite suite)
{
    this->face = face;
    this->suite = suite;
}

bool Card::isRed()
{
    return (this->suite == Suite::HEARTS || this->suite == Suite::DIAMONDS);
}

void Card::print()
{
    string suite = Suites::SuiteNames[(int) this->suite];
    string face = Faces::FaceNames[(int) this->face];
    cout << "\nCard suite : " << suite << " face: " << face << endl;

}

Face Card::getFace()
{
    return face;
}
void Card::setFace(Face face)
{
    this->face = face;
}
Suite Card::getSuite()
{
    return suite;
}
void Card::setSuite(Suite suite)
{
    this->suite = suite;
}