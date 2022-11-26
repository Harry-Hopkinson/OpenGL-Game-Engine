#include <core/logger/logger.hpp>

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
