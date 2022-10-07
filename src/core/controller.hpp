#pragma once

#include <src/core/window.hpp>

namespace Core {
class Controller {
 public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

 private:
  Window window{WIDTH, HEIGHT, "Hello Vulkan!"};
};}