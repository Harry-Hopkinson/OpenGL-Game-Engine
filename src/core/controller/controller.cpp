#include <core/controller/controller.hpp>
#include <core/fps/fps.cpp>
#include <src/events/mouse/mouse.cpp>
#include <src/events/keyboard/keyboard.hpp>

Keyboard keyboard;

namespace Core
{

  int Controller::run()
  {
    glfwMakeContextCurrent(window.getWindow());

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
      std::cout << "Failed to initialize GLAD" << std::endl;
      return -1;
    }

    std::cout << "Vendor: " << glGetString(GL_VENDOR) << std::endl;
    std::cout << "Renderer: " << glGetString(GL_RENDERER) << std::endl;
    std::cout << "Version: " << glGetString(GL_VERSION) << std::endl;
    while (!window.shouldClose())
    {
      glfwPollEvents();
      // check if keyboard pressed
      if (glfwGetKey(window.getWindow(), GLFW_KEY_ESCAPE) == GLFW_PRESS)
      {
        glfwSetWindowShouldClose(window.getWindow(), true);
      }
    }
    return 0;
  }
}