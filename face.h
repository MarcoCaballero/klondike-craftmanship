#include <iostream>
namespace Faces
{
enum Face
{
    ACE,
    KING,
    QUEEN,
    JACK,
    N_10,
    N_9,
    N_8,
    N_7,
    N_6,
    N_5,
    N_4,
    N_3,
    N_2,
    SIZE_OF_ENUM,
};
static const char *FaceNames[] = {"ACE", "KING", "QUEEN", "JACK", "N_10", "N_9", "N_8", "N_7", "N_6", "N_5", "N_4", "N_3", "N_2"};
static_assert(sizeof(Faces::FaceNames) / sizeof(char *) == Faces::SIZE_OF_ENUM, "sizes dont match");
}