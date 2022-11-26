#include <iostream>

void printGreen(std::string message) {
  std::cout << "\033[1;32m" << message << "\033[0m" << std::endl;
}

void printRed(std::string message) {
  std::cout << "\033[1;31m" << message << "\033[0m" << std::endl;
}