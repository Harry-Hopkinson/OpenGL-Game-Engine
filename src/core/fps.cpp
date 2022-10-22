#include <GLFW/glfw3.h>
#include <iostream>

namespace Core {
  class FPS {
    public:
      static void update() {
        static int frameCount = 0;
        static double previousSeconds = 0.0;
        double elapsedSeconds;
        double currentSeconds = glfwGetTime();

        elapsedSeconds = currentSeconds - previousSeconds;

        // limit text updates to 4 per second
        if (elapsedSeconds > 0.25) {
          previousSeconds = currentSeconds;
          double fps = (double)frameCount / elapsedSeconds;
          double msPerFrame = 1000.0 / fps;

          std::cout << "Response Time per frame " << msPerFrame << "ms/frame - Frame Rate " << fps << "fps" << std::endl;

          frameCount = 0;
        }
        frameCount++;
      }
};}