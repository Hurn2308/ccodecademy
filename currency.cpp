#include <iostream>

int main() {
  double pesos = 0.00;
  double reais = 0.00;
  double soles = 0.00;
  double dollars = 0.00;

  std::cout << "Enter number of Colombian Pesos: \n";
  std::cin >> pesos;
  std::cout << "Enter number of Brazilian Reais: \n";
  std::cin >> reais;
  std::cout << "Enter number of Peruvian Soles: \n";
  std::cin >> soles;

  //1 Pesos = 0.0061 dollars
  //1 Reais = 0.20 dollars
  //1 Soles = 0.27 dollars
  
  dollars = (0.0061 * pesos) + (0.20 * reais) + (0.27 * soles);
  std::cout << "US Dollars = $ " << dollars << "\n";
  
  
}
