#include <utils.h>
#include <shaders.h>

#include <iostream>

const unsigned int SCR_WIDTH = 800;
const unsigned int SCR_HEIGHT = 600;

int main()
{
    // glfw: initialize
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
 
    // glfw: create window
    GLFWwindow* window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "Window Title", NULL, NULL);
    if (window == NULL) {
        std::cout << "Failed to create GLFW window" << "\n";
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
 
    // glad: load all OpenGL function pointers
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        std::cout << "Failed to initialize GLAD" << "\n";
        return -1;
    }
 
    // build and compile shader program
    int success;
    char errorInfo[512] = "";
 
    // vertex shader
    unsigned int vertexShader = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertexShader, 1, &vertexShaderSource, NULL);
    glCompileShader(vertexShader);
 
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertexShader, 512, NULL, errorInfo);
        std::cout << "ERROR::VERTEX::SHADER::COMPILATION_FAILED\n" << errorInfo << "\n";
    }
 
    // fragment shader
    unsigned int fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragmentShaderSource, NULL);
    glCompileShader(fragmentShader);
 
    glGetShaderiv(fragmentShader, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(fragmentShader, 512, NULL, errorInfo);
        std::cout << "ERROR::FRAGMENT::SHADER::COMPILATION_FAILED\n" << errorInfo << "\n";
    }
 
    // link shaders
    unsigned int shaderProgram = glCreateProgram();
    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);
 
    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(shaderProgram, 512, NULL, errorInfo);
        std::cout << "ERROR::PROGRAM::LINKING_FAILED\n" << errorInfo << "\n";
    }
 
    // delete shaders after linking
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);
 
    // set vertex data 
    float vertices[] = {
        -0.5f, -0.5f, 0.0f, // left  (x=-1,y=0 : x=0,y=-1)
         0.5f, -0.5f, 0.0f, // right (x=0,y=-1 : x=1,y=0)
         0.0f,  0.5f, 0.0f  // top   (x=0,y=1)
    };
 
    // set buffers vertex buffer object anb vertex array object
    unsigned int VBO, VAO;
    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);
     
    // bind vertex array object
    glBindVertexArray(VAO);
 
    // bind vertex buffer object
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
 
    // registered VBO as the vertex attributes
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);
 
    // unbind the VAO
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);
 
    // render loop
    while (!glfwWindowShouldClose(window)) {
        processInput(window);
 
        // render
        glClearColor(0.2f, 0.3f, 0.4f, 1.0f);
        glClear(GL_COLOR_BUFFER_BIT);
 
        // draw triangle
        glUseProgram(shaderProgram);
        glBindVertexArray(VAO); 
        glDrawArrays(GL_TRIANGLES, 0, 3);
 
        // glfw: swap buffers
        glfwSwapBuffers(window);
 
        // glfw: poll IO events (keys & mouse)
        glfwPollEvents();
 
    }
 
    // de-allocate all resources
    glDeleteVertexArrays(1, &VAO);
    glDeleteBuffers(1, &VBO);
    glDeleteProgram(shaderProgram);
 
    // glfw: terminate and clear all previously GLFW allocated resources
    glfwTerminate();
}