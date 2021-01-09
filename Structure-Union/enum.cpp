#include<iostream>
#include<conio.h>
using namespace std;
enum days_of_week{sun,mon,tue,wed,thurs,fri,sat};
int main()
{
    days_of_week day1,day2;
    day1=mon;
    day2=thu;
    int diff=day2-day1;
    if(day1<day2)
    {
        cout<<"Day one comes before Day two";
    }
    return 0;
}
