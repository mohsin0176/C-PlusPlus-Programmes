#include<iostream>
#include<conio.h>
using namespace std;
void square(int*);
int main()
{
    int a=10;
    square(&a);
    cout<<a;
    return 0;
}
void square(int *px)
{
    *px=(*px)*(*px);
    cout<<*px;
}
