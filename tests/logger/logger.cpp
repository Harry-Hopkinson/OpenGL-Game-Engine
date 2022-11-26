#include <src/core/logger/logger.hpp>

int logger()
{
  Logger logger;
  // log hello world and expect it to be printed to the console
  std::string expected = "Hello World!";
  logger.Log(expected);
  logger.Fail("Test Fail");
  logger.Pass("Test Pass");
}