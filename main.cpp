#include<iostream>
#include<stdlib.h>
#include "GameDie.h"
using namespace std;

int main()
{  
    GameDie objGd;

      int x= objGd.roll(); //calling the roll() function to generate random number
       cout << "The Game throws : " << x << endl;

         return 0;

}

