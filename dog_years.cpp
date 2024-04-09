#include <iostream>

int main() {
  int dog_age = 0; //Declared the variable dog age for input later
  int early_years = 21; //The variable early_years is given the value of 21 as the first two years of a dogs life counts as 21 human years.
  int later_years = (dog_age - 2)*4; //Calculation for each subsequent year after the first 2 of a dogs life to be 4 more additional human years
  int human_years = early_years + later_years;

  if(dog_age == 1){
    std::cout << "My name is Ilhan! Ruff ruff, I am 10.5 years old in human years.\n";
  } else if(dog_age <= 0){
    std::cout << "Invalid Age!\n";
  } else {
    std::cout << "My name is Ilhan! Ruff ruff, I am " << human_years << " years old in human years.\n";
  }

  
}
