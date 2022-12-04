#pragma once

#include <core/window/window.cpp>

namespace Core
{
  class Controller
  {
  public:
    static constexpr int WIDTH = 800;
    static constexpr int HEIGHT = 600;

    int run();

  private:
    Window window{WIDTH, HEIGHT, "Window (" + std::to_string(WIDTH) + "x" + std::to_string(HEIGHT) + ")"};
  };
}