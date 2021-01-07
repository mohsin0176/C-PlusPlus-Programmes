#include<iostream>
using namespace std;
int main()
{
    int a=23,b=456;
    float c=46.56;
    long d=24546,e;
    e=(((long(a)+long(c))*d)+long(b));
    cout<<e;
    return 0;
}
