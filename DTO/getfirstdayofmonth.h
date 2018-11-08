#ifndef GETFIRSTDAYOFMONTH_H
#define GETFIRSTDAYOFMONTH_H
#include <iostream>
#include <ctime>
using namespace std;
class getFirstDayOfMonth
{
private:
    unsigned long long int i_year,i_mon,j,T_days,days_a_year,k,m;
    int p,w,l,s;
public:
    getFirstDayOfMonth();
    int getFirstDay(unsigned long long int i_year,unsigned long long int i_mon);
};

#endif // GETFIRSTDAYOFMONTH_H
