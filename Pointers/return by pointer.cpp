#include<iostream>
#include<conio.h>
using namespace std;
int* max(int*,int*);
int main()
{
    int a=10,b=20,c=30;
    p=max(&a,&b);
    cout<<*p;
}
int* max(int *pa,int *pb)
{
    if(*pa>*pb)
    {
        return pa;
    }
    else
    {
        return pb;
    }
}
