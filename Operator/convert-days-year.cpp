#include<iostream>
using namespace std;
int main()
{
    int d,y,m,w;
    cin>>d;
    y=d/365;
    cout<<y<<endl;
    d=d%365;
    m=d/30;
    cout<<m<<endl;
    d=d%30;
    w=d/7;
    cout<<w<<endl;
    d=d%7;
    cout<<d<<endl;

    return 0;
}
