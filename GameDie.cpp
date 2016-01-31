#include "GameDie.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//class constructor that seeds the random number generator
GameDie::GameDie()
{
}

//generate a random number between 1-6 (inclusive) and display it
void GameDie::roll()
{
  srand(time(NULL)); 
  
  cout << "Game Throws number : "
    << rand() % 6 + 1<<endl;  //rand() helps you generate random number
}

