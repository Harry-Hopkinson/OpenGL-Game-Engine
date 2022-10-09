#include <iostream>
#include <src/core/logger.hpp>

namespace Logger {
  void Log(const std::string& message) {
    std::cerr << message << std::endl;
  }
}