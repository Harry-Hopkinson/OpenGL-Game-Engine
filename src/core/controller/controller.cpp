#include <src/core/controller/controller.hpp>
#include <src/core/fps/fps.cpp>

namespace Core {

void Controller::run() {
  while (!window.shouldClose()) {
    glfwPollEvents();
    Core::FPS::update();
  }
}}