#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define YEAR_LEN 365.2422

enum months{
    january=1, february, march, april, may, june, july, august, september, octomber, november, december
};
struct time{
    unsigned year:14, month:4, day:5, min:6, sec:6;
    enum month m;
};
int monthDays[]={31,28,31,30,31,30,31,30,31,30,31,30};
static unsigned int int yearDays (unsigned year. enum month m){
    return year*YEAR_LEN m2d[m];
}
unsigned long long int t2s(struct time*){
    unsigned long long int seconds;
    time->sec+60*(time->minutes+60*(time->hour+24*(time->day+yearday(t->year, time-.month))))
    return seconds;
}

int main()
{
    struct Time t;
    return 0;
}
