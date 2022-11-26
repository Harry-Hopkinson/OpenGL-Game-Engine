#pragma once

#include <iostream>

std::ostream &printGreen(std::string message)
{
  return std::cout << "\033[1;32m" << message << "\033[0m"
                   << "\n";
}

std::ostream &printRed(std::string message)
{
  return std::cout << "\033[1;31m" << message << "\033[0m"
                   << "\n";
}

class Logger
{
public:
  std::ostream &Log(std::string message)
  {
    return std::cout << message << "\n";
  }
  std::ostream &Pass(std::string message)
  {
    return printGreen(message);
  }
  std::ostream &Fail(std::string message)
  {
    return printRed(message);
  }
};
