#include<iostream>
#include<conio.h>
using namespace std;
void divide(double x,double y)
{
    cout<<"Inside Divide";
    try
    {
        if(y==0)
        {
            throw y;
        }
        else
        {
            cout<<x/y<<endl;
        }
    }
    catch(double)
    {
        cerr<<"Caught double inside divide";
        throw;
    }
    cout<<"End Of function";
}
int main()
{
    try
    {
    cout<<"Inside Main";
    divide(10,20);
    divide(15,30);
    }
    catch(double d)
    {
        cerr<<"Exception Double";
    }
    cout<<"END";
    return 0;
}
