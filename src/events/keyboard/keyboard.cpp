#include <src/events/keyboard/keyboard.hpp>

class Keyboard
{
  void keyPressed(int key)
  {
    std::cout << "Key pressed: " << key << std::endl;
  };
};