#include <core/logger/logger.hpp>

namespace Logger
{
  void Fail(std::string message)
  {
    printRed(message);
  }
  void Pass(std::string message)
  {
    printGreen(message);
  }
  void Log(std::string message)
  {
    std::cout << message << std::endl;
  }
}
