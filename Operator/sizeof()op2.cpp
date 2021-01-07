#include<iostream>
using namespace std;
int main()
{
    int a=100,b;
    b=sizeof(a);
    cout<<b<<endl;
    b=sizeof(double);
    cout<<b<<endl;
    b=sizeof(123L);
    cout<<b<<endl;
    b=sizeof(123.45);
    cout<<b<<endl;
    b=sizeof(123.45f);
    cout<<b<<endl;
    return 0;
}
