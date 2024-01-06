#include <iostream>
#include "Sales_item.h"

int main()
{

  Sales_item item;
  Sales_item prevItem;

  std::cout << "Enter Sales Items with Same ISBN \n Example (0-201-78345-X 3 20.00): " << std::endl;
  
  std::cout << "First Item: " << std::endl;
  std::cin >> prevItem;
  
  std::cout << "Subsequent Items: " << std::endl;
  while(std::cin >> item) {
    if (item.isbn() == prevItem.isbn())
    {
      prevItem += item;
    }
  }

  std::cout << prevItem << std::endl;

  return 0;
}