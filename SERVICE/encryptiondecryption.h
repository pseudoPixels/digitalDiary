#ifndef ENCRYPTIONDECRYPTION_H
#define ENCRYPTIONDECRYPTION_H
#include <QString>
#include <string>
#include <iostream>
using namespace std;
class encryptionDecryption
{
private:
    string  original;
    string encrypted;
    string  unencrypted;
    char key;
    QString encr,send;

public:
    encryptionDecryption(){
        encrypted="";
        original="";
        unencrypted="";
        key='x';
    }

    QString encryptIt(QString encr){

             this->original=encr.toStdString();
              encrypted="";
             for (int temp = 0; temp < original.size(); temp++)
             encrypted += original[temp] ^ ((int)key + temp) % 10;
             send=send.fromStdString(encrypted);
           return this->send;
         }
    QString decryptIt(QString encr)
          {
             this->encrypted=encr.toStdString();
              unencrypted="";

               for (int temp = 0; temp < encrypted.size(); temp++){
                unencrypted += encrypted[temp] ^ ((int)key + temp) % 10;
               }
           send=send.fromStdString(unencrypted);

            return this->send;
          }

};

#endif // ENCRYPTIONDECRYPTION_H
