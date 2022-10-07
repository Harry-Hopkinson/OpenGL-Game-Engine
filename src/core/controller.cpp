#include <src/core/controller.hpp>

namespace Core {

void Controller::run() {
  while (!window.shouldClose()) {
    glfwPollEvents();
  }
}}