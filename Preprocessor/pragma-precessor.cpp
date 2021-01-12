#include<iostream>
#include<conio.h>
void fun1();
void fun2();
#pragma startup fun1
#pragma exit fun2
int main()
{
    cout<<"Inside Main";
    return 0;
}
void fun1()
{
    cout<<"function1";
}
void fun2()
{
    cout<<"function2";
}
