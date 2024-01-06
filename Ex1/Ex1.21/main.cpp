#include <iostream>
#include "Sales_item.h"

int main() {

  Sales_item item1;
  Sales_item item2;

  std::cout << "Enter Sales Items with Same ISBN \n Example (0-201-78345-X 3 20.00): " << std::endl;
  std::cin >> item1 >> item2;

  if (item1.isbn() == item2.isbn()) {
    std::cout << item1 + item2 << std::endl;
  } else {
    std::cout << "Not the same ISBN" << std::endl;
  }

  return 0;
}