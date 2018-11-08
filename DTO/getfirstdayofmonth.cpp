#include "getfirstdayofmonth.h"

getFirstDayOfMonth::getFirstDayOfMonth()
{
     T_days=0;
     w=0;
     s=1;
}

int getFirstDayOfMonth::getFirstDay(unsigned long long i_year, unsigned long long i_mon)
{
                this->i_year=i_year;
                this->i_mon=i_mon;
                for(j=1970;j<i_year;j++){
                    if(j%4==0 && j%100!=0 )days_a_year=366;
                    else if(j%4==0 && j%100==0 && j%400==0)days_a_year=366;
                    else days_a_year=365;
                    T_days=T_days+days_a_year;
                 }

                for(k=1;k<i_mon;k++){
                    if(k==1 || k==3 || k==5 || k==7 || k==8 || k==10 || k==12)T_days=T_days+31;
                    if(k==2)
                    {
                      if (i_year%4==0 && i_year%100!=0 )T_days=T_days+29;
                      else if(i_year%4==0 && i_year%100==0 && i_year%400==0)T_days=T_days+29;
                      else T_days=T_days+28;
                    }

                    if(k==4 || k==6 || k==9 || k==11)T_days=T_days+30;

               }
            T_days=T_days+1;



            return T_days%7;

}
