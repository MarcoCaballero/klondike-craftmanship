#include <vector>
#include "card.h"

class Deck
{
  public:
    Deck();
    Deck(std::vector<Card> deck);
    void initializeDeck();
    void shuffleCards();
    std::vector<Card> getDeck();
    void setDeck(std::vector<Card> cardDeck);
    Card getTop();
    void pop();
    void push(Card card);
    void print();
    int size();

  private:
    std::vector<Card> deck;
};