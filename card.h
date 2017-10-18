#pragma once
#include <string>
#include "suite.h"
#include "face.h"

using namespace Suites;
using namespace Faces;
class Card
{
public:
  Card();
  Card(Face face, Suite suite);
  void print();
  Face getFace();
  void setFace(Face face);
  Suite getSuite();
  void setSuite(Suite suite);
  bool isRed();
  std::string toReadableString();

private:
  Face face;
  Suite suite;
};