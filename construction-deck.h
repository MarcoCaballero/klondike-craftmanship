#pragma once
#include "deck.h"

class ConstructionDeck : public Deck
{
  public:
    ConstructionDeck(int initialSize);
    ConstructionDeck(std::vector<Card> cards, int initialSize);
    void pushThrow(Deck deck);
    void pushThrow(Card card);
    std::vector<Card> throwAndReturnSubVector(int startPos, int endPos);

private:
    int initialSize;
    bool isMergeableWith(Deck deck);
    bool isMergeableWith(Card card);
    bool isSameColorWith(bool isRed);
};