#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    int s,a,b,c;
    float area;
    cin>>a>>b>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<area;
    return 0;
}
