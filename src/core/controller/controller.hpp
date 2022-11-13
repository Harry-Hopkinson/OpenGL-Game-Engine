#include <src/core/window/window.cpp>

namespace Core {
class Controller {
 public:
  static constexpr int WIDTH = 800;
  static constexpr int HEIGHT = 600;

  void run();

 private:
  Window window{WIDTH, HEIGHT, "Hello Vulkan!"};
};}