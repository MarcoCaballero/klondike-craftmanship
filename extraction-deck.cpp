#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include "extraction-deck.h"

using namespace std;

ExtractionDeck::ExtractionDeck()
{
    Deck::Deck();
}

ExtractionDeck::ExtractionDeck(std::vector<Card> cards)
{
    Deck::Deck(this->cards = cards);
}

void ExtractionDeck::push(Deck deck)
{
    while(!deck.isEmpty()) {
        this->cards.push_back(deck.getTop());
        deck.pop();
    }
}

void ExtractionDeck::push(Card card){
    Deck::push(card);
}

Card ExtractionDeck::throwAndReturnCard()
{
    Card card = this->getTop();
    this->pop();
    return card;
}