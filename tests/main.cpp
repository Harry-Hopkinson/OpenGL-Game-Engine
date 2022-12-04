#include <src/core/logger/logger.hpp>

int main(int argc, char *argv[])
{
  Logger logger;
  std::ostream &output = logger.Log("Hello World!");
  if (output.good())
  {
    logger.Pass("No badbit set");
  }
  else
  {
    return 1;
  }
  std::stringstream ss;
  ss << output.rdbuf();
  if (ss.str() == "Hello World!")
  {
    logger.Pass("Output is correct");
  }
  std::cout << ss.str() << "\n";
}
