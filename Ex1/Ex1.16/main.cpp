#include <iostream>

int main() {

  int sum = 0;
  int value;

  std::cout << "Enter values to sum (EOF to end): ";
  while (std::cin >> value) {
    sum += value;
  }

  std::cout << "Sum: " << sum << std::endl;
  return 0;
}