#include "deck.h"

class ExtractionDeck : public Deck
{
public:
    ExtractionDeck();
    ExtractionDeck(std::vector<Card> cards);
    void push(Deck deck);
    Card throwAndReturnCard();
};