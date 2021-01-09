#include<iostream>
#include<conio.h>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};

struct Room
{
    Distance length;
    Distance width;
};

int main()
{
    Room Drawing ={{12,5.5},{15,6}};
    float l=Drawing.length.feet+Drawing.length.inches/12;
    float w=Drawing.width.feet+Drawing.width.inches/12;
    cout<<l*w;
    return 0;
}
