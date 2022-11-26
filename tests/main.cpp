#include <src/core/logger/logger.hpp>

int main(int argc, char *argv[])
{
  Logger logger;
  logger.Log("Hello World!");
  logger.Fail("Test Fail");
  logger.Pass("Test Pass");
  return 0;
}
