#pragma once

#include <iostream>
#include <string>

namespace Logger {
  typedef std::string String;
  typedef std::basic_ostream<char, std::char_traits<char>> OutputStream;

  OutputStream& Log(const String& message) {
    return std::cout << message << std::endl;
  }
}
