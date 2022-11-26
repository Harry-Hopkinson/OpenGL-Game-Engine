#include <core/controller/controller.hpp>
#include <core/fps/fps.cpp>
#include <src/events/mouse/mouse.cpp>
#include <src/events/keyboard/keyboard.hpp>

Keyboard keyboard;

namespace Core
{

  void Controller::run()
  {
    while (!window.shouldClose())
    {
      glfwPollEvents();
      // check if keyboard pressed
      if (glfwGetKey(window.getWindow(), GLFW_KEY_ESCAPE) == GLFW_PRESS)
      {
        glfwSetWindowShouldClose(window.getWindow(), true);
      }
    }
  }
}