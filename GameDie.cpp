#include "GameDie.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-16 (inclusive) and display it
int GameDie::roll()
{
  srand(time(NULL)); 
  
    return rand() % 16 + 1;  //rand() helps you generate random number
}

