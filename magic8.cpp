#include <iostream>
#include <cstdlib>

int main(){
  srand(time(NULL));
  int rando_number = std::rand() % 10;
  std::cout << "MAGIC 8-BALL: \n";

  if(rando_number == 0){
    std::cout << "It is certain.\n";
  } 
  else if (rando_number == 1){
    std::cout << "Ilhan\n";
  }
  else if (rando_number == 2){
    std::cout << "Chan\n";
  }
  else if (rando_number == 3){
    std::cout << "Ravin\n";
  }
  else if (rando_number == 4){
    std::cout << "Lee\n";
  }
  else if (rando_number == 5){
    std::cout << "Jordan\n";
  }
  else if (rando_number == 6){
    std::cout << "Jiale\n";
  }
    else if (rando_number == 7){
    std::cout << "Darren\n";
  }
    else if (rando_number == 8){
    std::cout << "Sorren\n";
  }
  else if (rando_number == 9){
    std::cout << "Ian\n";
  }
  else {
    std::cout << "Very doubtful.\n";
  }
}
