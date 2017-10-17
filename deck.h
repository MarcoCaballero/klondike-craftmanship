#include <vector>
#include "card.h"

class Deck
{
  public:
    Deck();
    Deck(std::vector<Card> cards);
    void initializeDeck();
    void shuffleCards();
    std::vector<Card> getCards();
    void setCards(std::vector<Card> cards);
    Card getTop();
    void pop();
    void push(Card card);
    void print();
    int size();
    bool isEmpty();

  protected:
    std::vector<Card> cards;
};