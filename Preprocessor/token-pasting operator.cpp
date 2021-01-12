#include<iostream>
#include<conio.h>
using namespace std;
#define concat(a,b)a##b
int main()
{
    int xy=100;
    cout<<concat(x,y);
    return 0;
}
