#include<iostream>
#include<conio.h>
using namespace std;
int  cube(int);
int  main()
{
    int a=10;
    cube(a);
    cout<<a<<endl;

}
int  cube(int x)
{
    x=x*x*x;
    cout<<x<<endl;
}
