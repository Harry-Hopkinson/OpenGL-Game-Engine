#include <GLFW/glfw3.h>

// glfw: when window size changed this callback function executes // glfwSetFramebufferSizeCallback
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    // glfw: the viewport matches the new window dimensions
    glViewport(0, 0, width, height);
}
 
// glfw: process keys
void processInput(GLFWwindow* window) {
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS)
        glfwSetWindowShouldClose(window, true);
}