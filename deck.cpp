#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <random>
#include "deck.h"

using namespace std;

Deck::Deck()
{
}

Deck::Deck(std::vector<Card> cards)
{
    this->cards = cards;
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
    shuffle(begin(this->cards), end(this->cards), randomizator);
}

std::vector<Card> Deck::getCards()
{

    return this->cards;
}

void Deck::setCards(std::vector<Card> cards)
{
    this->cards = cards;
}

Card Deck::getTop()
{
    return this->cards.front();
}

void Deck::pop()
{
    this->cards.erase(this->cards.begin());
}

void Deck::print()
{
    for (int i = 0; i <this->cards.size() ; i++)
    {
        this->cards[i].print();
    }
}

void Deck::push(Card card)
{
    std::vector<Card>::iterator iterator;
    iterator = this->cards.end();
    iterator = this->cards.insert(iterator, card);
}

int Deck::size()
{
    return this->cards.size();
}

bool Deck::isEmpty()
{
    return this->size() == 0;
}