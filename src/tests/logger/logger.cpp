#include <core/logger/logger.hpp>

void LoggerTest(std::string testMessage) {
  // check if Logger::Log(testMessage) outputs
  // the same as std::cout << testMessage << std::endl;
  Logger::Log(testMessage);
}