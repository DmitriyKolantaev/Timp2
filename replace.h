#pragma once
#include <string>
class Replace
{
private:
  std::string values;
  int step;
  std::string dict;
  std::string abc = "abcdefghijklmnopqrstuvwxyz";


public:
  Replace(  std::string in, std::string dict);

  void encode();
  void decode();
  std::string ret();
};
