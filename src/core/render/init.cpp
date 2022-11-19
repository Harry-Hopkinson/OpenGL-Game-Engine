#include <src/core/render/render.hpp>

void init() 
{
  glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
  glMatrixMode(GLUT_SINGLE | GLUT_RGB);
  glLoadIdentity();
  glOrtho(-90.0, 100.0, -15.0, 100.0, 0.0, 1.0);
}