#include <core/controller/controller.cpp>
#include <cstdlib>
#include <iostream>
#include <stdexcept>
#include <core/logger/logger.hpp>
#include <core/audio/audio.hpp>

int main(int argc, char *argv[]) {
  Core::Controller app{};
  playAudio("../audio/music.wav");

  try {
    app.run();
  } catch (const std::exception& error) {
    Logger::Log(error.what());
    return EXIT_FAILURE;
  }
  return EXIT_SUCCESS;
}
