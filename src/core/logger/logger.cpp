#include <iostream>

namespace Logger {
  void Log(const std::string& message) {
    std::cerr << message << std::endl;
  }
}
