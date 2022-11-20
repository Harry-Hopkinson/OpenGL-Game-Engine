#pragma once

#include <GLFW/glfw3.h>
#include <iostream>

class Keyboard {
  public:
    void keyPressed(GLFWwindow* window, int key) {
      std::cout << "Key pressed: " << key << std::endl;
    };
};