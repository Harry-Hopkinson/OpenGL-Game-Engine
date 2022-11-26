#include <core/controller/controller.cpp>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <core/logger/logger.hpp>
#include <core/audio/audio.hpp>

int main(int argc, char *argv[])
{
  Logger logger;
  Core::Controller app{};
  playAudio("../audio/music.wav");
  logger.Log("Hello World!");

  try
  {
    app.run();
  }
  catch (const std::exception &error)
  {
    logger.Log(error.what());
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
