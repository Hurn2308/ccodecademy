#include <iostream>

int main(){
  int i;

  for (i = 0; i <= 100; i++){
    if (i % 3 == 0){
      std::cout << "Fizz!\n";
    } else if(i % 5 == 0){
      std::cout << "Buzz!\n";
    } else if (i % 3 == 0 && i % 5 == 0){
      std::cout << "FizzBuzz!\n";
    } else {
    std::cout << i << "!\n";
    }
  }
}
