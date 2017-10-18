#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "construction-deck.h"

using namespace std;

ConstructionDeck::ConstructionDeck(int initialSize)
{
    Deck::Deck();
    this->initialSize = initialSize;
}

ConstructionDeck::ConstructionDeck(std::vector<Card> cards, int initialSize)
{
    Deck::Deck(this->cards = cards);
    this->initialSize = initialSize;
}
void ConstructionDeck::pushThrow(Deck deck)
{
    if (isMergeableWith(deck.getBack()))
    {
        while (!deck.isEmpty())
        {
            Deck::push(deck);
        }
    }
}

void ConstructionDeck::pushThrow(Card card)
{
    if (isMergeableWith(card))
    {
        std::vector<Card>::iterator iterator;
        iterator = this->cards.begin();
        iterator = this->cards.insert(iterator, card);
    }
}

std::vector<Card> ConstructionDeck::throwAndReturnSubVector(int startPos, int endPos)
{

    std::vector<Card>::iterator itStart = this->getCards().begin() + (startPos - 1);
    std::vector<Card>::iterator itEnd = this->getCards().begin() + endPos;
    std::vector<Card> subVector(itStart, itEnd);
    this->cards.erase(itStart, itEnd);
    return subVector;
}
bool ConstructionDeck::isMergeableWith(Deck deck)
{
    Card deckBackCard = deck.getBack();
    return !isSameColorWith(deckBackCard.isRed());
}
bool ConstructionDeck::isMergeableWith(Card card)
{
    return !isSameColorWith(card.isRed());
}

bool ConstructionDeck::isSameColorWith(bool isRed)
{
    if (!this->isEmpty())
    {
        return this->getTop().isRed() == isRed;
    }

    return false;
}