#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=10,*ptr;
    ptr=&a;
    cout<<a<<endl;
    *ptr=(*ptr)/2;
    cout<<(*ptr);

    return 0;
}
