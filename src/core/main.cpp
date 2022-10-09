#include <src/core/controller.hpp>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <src/core/logger.hpp>

int main() {
  Core::Controller app{};

  try {
    app.run();
  } catch (const std::exception& e) {
    Logger::Log(e.what());
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}