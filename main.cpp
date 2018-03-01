#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
  
  int wins = 0;
  int amount;
  cout<<"How many times do you want to play this game?\n";
  cin>>amount;
  
  for (int j=0; j < amount; j++)
  {
  game.newGame();
  game.guessDoorC();
  game.guessDoorC();
   if (game.isWinner() == true)
   {
   wins++;
   }
  }
  cout<<"wins: "<<wins<<endl;
  return 0;
}
