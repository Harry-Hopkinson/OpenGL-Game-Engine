const char* vertexShaderSource = 
"#version 450 core\n"
"layout (location = 0) in vec3 aPos;\n"
"void main()\n"
"{\n"
"   gl_Position = vec4(aPos.x, aPos.y, aPos.z, 1.0);\n"
"}\n\0";

const char* fragmentShaderSource = 
"#version 450 core\n"
"out vec4 FragmentColor;\n"
"void main()\n"
"{\n"
"   FragmentColor = vec4(1.0f, 0.5f, 0.2f, 1.0f);\n"
"}\n\0";