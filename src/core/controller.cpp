#include <src/core/controller.hpp>
#include <src/core/fps.cpp>

namespace Core {

void Controller::run() {
  while (!window.shouldClose()) {
    glfwPollEvents();
    Core::FPS::update();
  }
}}