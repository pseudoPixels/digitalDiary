#include "stringendc.h"

stringEnDc::stringEnDc()
{
                encrypted="";
                original="";
                unencrypted="";
                key='x';
}

string stringEnDc::encryptIt(string original)
{
              this->original=original;
              for (int temp = 0; temp < original.size(); temp++)
              encrypted += original[temp] ^ ((int)key + temp) % 10;
              return this->encrypted;
}

string stringEnDc::decryptIt(string encrypted1)
{
                unencrypted="";
              for (int temp = 0; temp < encrypted1.size(); temp++){
                unencrypted += encrypted1[temp] ^ ((int)key + temp) % 10;
               }

              return this->unencrypted;
}
