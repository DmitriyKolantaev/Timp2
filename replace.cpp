#include "replace.h"
#include <string>
#include <iostream>
using namespace std;


Replace::Replace(  string in, string dict)
{
  this->step = step;
  this->values = in;
  this->dict = dict;
};

void Replace::encode()
{
  for (int i = 0; i < this->values.size(); i++)
  {
    int pos;
    for (int j = 0; j < this->abc.size(); j++)
    {
      if (this->values[i] == this->abc[j])
      {
        pos = j;
        break;
      }
    }
    this->values[i] = this->dict[pos];
  }
};

void Replace::decode()
{
  cout << this->abc.size() << endl << this->dict.size()<<endl;
  for (int i = 0; i < this->values.size(); i++)
  {
    for (int j = 0; j < this->abc.size(); j++)
    {
      int pos;
      if (this->values[i] == this->dict[j])
      {
        pos = j;
        break;
      }
      this->values[i] = this->abc[pos];
    }
  }
};

string Replace::ret()
{
  return this->values;
}
