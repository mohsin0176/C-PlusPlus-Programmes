#include<iostream>
#include<conio.h>
#define MAX 1
int main()
{
    int a=10,b=20,m;
    #if MAX==1
    cout<<(a>b?a:b);
    #else
    cout<<(a<b?a:b);
    #endif
    return 0;
}
