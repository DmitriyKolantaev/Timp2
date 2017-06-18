#pragma once
#include <string>


class Ceaser
{
private:
  std::string values;
  int step;


public:
  Ceaser( int step,  std::string in);

  void encode();
  void decode();
  std::string ret();

};
