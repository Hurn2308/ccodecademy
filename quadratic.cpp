#include <iostream>
#include <cmath>

int main() {
  double a = 0.00;
  double b = 0.00;
  double c = 0.00;
  double root1 = 0.00;
  double root2 = 0.00;

  std::cout << "Enter a value: \n";
  std::cin >> a;
  std::cout << "Enter b value: \n";
  std::cin >> b;
  std::cout << "Enter c value: \n";
  std::cin >> c;
  root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
  root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);
  std::cout << "The values are " << root1 << " and " << root2 << ".\n";


  
  
}
