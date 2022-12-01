#pragma once

#include <iostream>
#include <string>
#include <sstream>

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
  std::basic_ostream<char, std::char_traits<char>> &Log(std::string message)
  {
    return std::cout << message << "\n";
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
