#include "didiwroteanything.h"

didIwroteAnything::didIwroteAnything()
{
}

bool didIwroteAnything::isAnyPrevData(char* ch,QString M,QString Y)
{
    int flag;
    ifstream fin("tmp.txt");
    fin>>file;
    fin.close();
    strcat(file,"Notes.txt");

   this-> Y=Y;

   this->M=M;

    Ys=Y.toStdString();
    Ms=M.toStdString();

    strcpy(Yc,Ys.data());
    strcpy(Mc,Ms.data());

    strcpy(work,"()");

    strcat(work,ch);
    strcat(work,Mc);
    strcat(work,Yc);
    strcat(work,"()");

    ifstream fInput(file);

    flag=0;

    while(!fInput.eof())
    {
        fInput>>check;
        if(strcmp(check,work)==0)
        {
           /* ui->pushButton_9->setEnabled(false);
            ui->pushButton_10->setEnabled(true);
            ui->pushButton_11->setEnabled(true);
            ui->pushButton_12->setEnabled(true);*/
            flag=1;
            break;
        }

    }

  fInput.close();

  if(flag)return true;
  else if(!flag)return false;
}
