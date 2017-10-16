#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <random>
#include "deck.h"

using namespace std;

Deck::Deck()
{
}

Deck::Deck(std::vector<Card> deck)
{
    this->deck = deck;
}

void Deck::initializeDeck()
{
    for (int suite = 0; suite <= static_cast<int>(Suite::SIZE_OF_ENUM) - 1; suite++)
    {
        for (int face = 0; face <= static_cast<int>(Face::SIZE_OF_ENUM) - 1; face++)
        {
            Card card = Card((Face)face, (Suite)suite);
            this->push(card);
        }
    }
}

void Deck::shuffleCards()
{
    auto randomizator = default_random_engine{};
    shuffle(begin(this->deck), end(this->deck), randomizator);
}

std::vector<Card> Deck::getDeck()
{
    return this->deck;
}

void Deck::setDeck(std::vector<Card> deck)
{
    this->deck = deck;
}

Card Deck::getTop()
{
    return this->deck.front();
}

void Deck::pop()
{
    this->deck.erase(begin(this->deck) + this->deck.size() - 1);
}

void Deck::print()
{
   for(int i = 0 ; i <= this->deck.size() - 1; i++) {
        this->deck[i].print();
   }
}

void Deck::push(Card card)
{
    std::vector<Card>::iterator iterator;
    iterator = this->deck.begin();
    iterator = this->deck.insert(iterator, card);
}

int Deck::size()
{
    return this->deck.size();
}