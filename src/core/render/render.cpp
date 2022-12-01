#include <core/render/render.hpp>

int renderShape()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glBegin(GL_TRIANGLES);
  glVertex2f(-0.5, -0.5);
  glVertex2f(0.0, 0.0);
  glVertex2f(0.5, -0.5);
  glEnd();
  return 0;
}