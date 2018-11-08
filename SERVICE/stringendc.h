#ifndef STRINGENDC_H
#define STRINGENDC_H
#include <string>
#include <iostream>
using namespace std;

class stringEnDc
{
private:
          string  original;
          string encrypted;
          string  unencrypted;
          char key;

public:
    stringEnDc();
    string encryptIt(string original);
    string decryptIt(string encrypted);
};

#endif // STRINGENDC_H
