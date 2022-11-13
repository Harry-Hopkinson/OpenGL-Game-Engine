#include <src/core/controller/controller.cpp>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <src/core/logger/logger.hpp>

int main() {
  Core::Controller app{};

  try {
    app.run();
  } catch (const std::exception& error) {
    Logger::Log(error.what());
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}