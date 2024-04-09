#include <iostream>

int main(){
  int g = 0;
  int h = 0;
  int r = 0;
  int s = 0;
  int a1 = 0;
  int a2 = 0;
  int a3 = 0;
  int a4 = 0;
  int max = 0;

  std::cout << "Hello Muggle The Sorting Hat Quiz has begun!\n";
  std::cout << "Q1) When im dead, I want people to remember me as: \n" << " 1)The Good\n" << " 2)The Great\n" << " 3)The Wise\n" << " 4)The Bold\n";
  std::cin >> a1;
  
  if(a1 == 1){
    h++;
  }
  else if(a1 == 2){
    s++;
  }
  else if(a1 == 3){
    r++;
  }
  else if(a1 == 4){
    g++;
  } else{
    std::cout << "Invalid Input!\n";
  }

  std::cout << "Q2) Dawn or Dusk?\n" << "\n 1)Dawn\n" << " 2)Dusk\n";
  std::cin >> a2;

  if (a2 == 1){
    g++;
    r++;
  } else if (a2 == 2){
    h++;
    s++;
  } else {
    std::cout << "Invalid Input!\n";
  }

  std::cout << "Q3) Which kind of instrument most pleases your ear?\n" << "\n 1)The violin\n" << " 2)The trumpet\n" << " 3)The piano\n" << " 4)The drum\n";
  std::cin >> a3;

  if(a3 == 1){
    s++;
  }
  else if(a3 == 2){
    h++;
  }
  else if(a3 == 3){
    r++;
  }
  else if(a3 == 4){
    g++;
  } else{
    std::cout << "Invalid Input!\n";
  }

  std::cout << "Q4) Which road tempts you most?\n" << "\n 1)The wide, sunny grassy lane\n" << " 2)The narrow, dark, lantern-lit alley" << " 3)The twisiting, leaf-strewn path through woods\n" << " 4)The cobbled street lined (ancient buildings)\n";
  std::cin >> a4;

  if(a4 == 1){
    h++;
  }
  else if(a4 == 2){
    s++;
  }
  else if(a4 == 3){
    g++;
  }
  else if(a4 == 4){
    r++;
  } else{
    std::cout << "Invalid Input!\n";
  }

  std::string house;

  if (g > max) {
    max = g;
    house = "Gryffindor";
  }
  if (h > max) {
    max = h;
    house = "Hufflepuff";
  }
  if (r > max) {
    max = r;
    house = "Ravenclaw";
  }
  if (s > max) {
    max = s;
    house = "Slytherin";
  }

std::cout << "You have been sorted into house "<< house << "!\n";
std::cout << g;
std::cout << h;
std::cout << r;
std::cout << s;




}
