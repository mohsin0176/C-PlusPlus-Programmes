#include<iostream>
#include<conio.h>
using namespace std;
int divide(int x,int y,int z)
{
    cout<<"Inside Divide"<<endl;
    if((x-y)!=0)
    {
        int res=z/(x-y);
        cout<<res;
    }
    else
    {
        throw(x-y);
    }
}
int main()
{
    try
    {
        cout<<"Inside Main()";
        divide(10,20);
        divide(20,30);
    }
    catch(int i)
    {
        cerr<<"Exception Caught"<<i;
    }
    cout<<"End";
    return 0;
}
