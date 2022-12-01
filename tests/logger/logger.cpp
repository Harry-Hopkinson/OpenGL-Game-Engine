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
    logger.Fail("Badbit set");
  }

  std::stringstream ss;
  ss << output.rdbuf();
  std::string outputBuffer = ss.str();
  if (outputBuffer == "Hello World!")
  {
    logger.Pass("Output is parameter");
  }
  else
  {
    logger.Fail("Output is not parameter");
  }
}
