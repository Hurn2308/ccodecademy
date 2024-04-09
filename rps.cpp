#include <iostream>
#include <stdlib.h>

int main(){
  /* Rock beat scissor, lizard
  Scissor beat paper,lizard
  Paper beats rock, spock
  Lizard beats spock,paper
  Spock beats scissors,rock*/

  srand (time(NULL));
  int comp_rand = rand() % 3 + 1;
  int user = 0;

  std::cout << "======================\n";
  std::cout << "Rock, Paper, Scissors!\n";
  std::cout << "======================\n";

  std::cout << "1) Rock\n";
  std::cout << "2) Paper\n";
  std::cout << "3) Scissors\n";

  std::cout << "Shoot!\n";
  std::cout << "Enter your choice: \n";
  std::cin >> user;

  if(user == 1 && comp_rand == 1){
    std::cout << "Its a tie!\n";
  } else if (user == 1 && comp_rand == 2) {
    std::cout << "You lose!\n";
  }
    else if (user == 1 && comp_rand == 3) {
    std::cout << "You win!\n";
    }
    else if (user == 2 && comp_rand == 2) {
      std::cout << "Its a tie!\n";
    }
    else if (user == 2 && comp_rand == 1) {
      std::cout << "You win!\n";
    }
    else if (user == 2 && comp_rand == 3) {
      std::cout << "You lose!\n";
    }
    else if (user == 3 && comp_rand == 3){
      std::cout << "Its a tie!\n";
    }
    else if (user == 3 && comp_rand == 1){
      std::cout << "You lose!\n";
    }
    else if (user == 3 && comp_rand == 2){
      std::cout << "You win!\n";
    }
    else {
      std::cout << "Invalid Input!\n";
    }
}
