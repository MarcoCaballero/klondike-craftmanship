#include <iostream>
namespace Suites
{
    enum Suite
    {
        CLUBS,
        DIAMONDS,
        HEARTS,
        SPADES,
        SIZE_OF_ENUM,
    };
static const char *SuiteNames[] = {"CLUBS", "DIAMONDS", "HEARTS", "SPADES"};
static_assert(sizeof(Suites::SuiteNames) / sizeof(char *) == Suites::SIZE_OF_ENUM, "sizes dont match");
}