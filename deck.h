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
  Card getBack();
  void pop();
  void push(Deck deck);
  void push(Card card);
  void print();
  int size();
  bool isEmpty();
  Card throwAndReturnCard();

  const int MAX_SIZE  = (int) (sizeof(Card) * 52);

protected:
  std::vector<Card> cards;
};