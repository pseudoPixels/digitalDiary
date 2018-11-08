#ifndef DIDIWROTEANYTHING_H
#define DIDIWROTEANYTHING_H
#include <QString>
#include <string>
#include <iostream>
#include <fstream>
using namespace std;
class didIwroteAnything
{
private:
    QString Y,M;
    char check[50];
    char date[50];
    char file[50],Yc[50],Mc[50],work[50];
    string Ys,Ms;
public:
    didIwroteAnything();
    bool isAnyPrevData(char* ch,QString M,QString Y);

};

#endif // DIDIWROTEANYTHING_H
