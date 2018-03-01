#include "SecretDoor/SecretDoor.h"
#include <iostream>

using namespace std;

int main()
{
  SecretDoor game;
   
  game.newGame() ;
  int amount;
  cout<<"How many times do you want to play this game?\n";
  cin>>amount;

  for (int j=0; j < amount; j++)
  {
  game.newGame();
  cout<<"Which door do you choose? (A/B/C)\n";
  game.guessDoorC();
  game.newGame();
  cout<<"Try again for your second choice.\n";
  game.guessDoorC();
   int wins;
   if (game.isWinner() == true)
   {
   cout<<wins++;
   }
   else 
   {
   cout<<"You lose\n";
   }
   j++;
  }
  return 0;
}
