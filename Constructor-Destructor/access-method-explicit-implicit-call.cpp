#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class ObjectMethod
{
    int a,b;
public:
    ObjectMethod(int,int);
    void display(void)
    {
        cout<<a;
        cout<<b;
    }
};
ObjectMethod::ObjectMethod(int x,int y)
{
    a=x;
    b=y;
}
int main()
{
    ObjectMethod obj1=ObjectMethod(23,95);
    ObjectMethod obj2(41,77);
    obj1.display();
    obj2.display();
    return 0;
}
