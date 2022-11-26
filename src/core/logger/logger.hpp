#pragma once

#include <iostream>

void printGreen(std::string message)
{
  std::cout << "\033[1;32m" << message << "\033[0m" << std::endl;
}

void printRed(std::string message)
{
  std::cout << "\033[1;31m" << message << "\033[0m" << std::endl;
}

class Logger
{
public:
  void Log(std::string message)
  {
    std::cout << message << std::endl;
  }
  void Pass(std::string message)
  {
    printGreen(message);
  }
  void Fail(std::string message)
  {
    printRed(message);
  }
};
