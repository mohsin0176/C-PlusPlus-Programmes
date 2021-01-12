#include<iostream>
#include<conio.h>
using namespace std;
void test(int x)throw(char,int,double)
{
    if(x==0)
    {
        throw 'B';
    }
    else if(x==1)
    {
        throw x;
    }
        else if(x==2)
    {
        throw 1.0;
    }
    cout<<"End of Try Block"<<endl;
}
int main()
{
    try
    {
    cout<<"Testing Throw";
    cout<<"x==0";
    test(0);
    cout<<"x==1";
    test(1);
    cout<<"x==2";
    test(3);
    cout<<"x==3";
    test(3);
    }
    catch(char c)
    {
        cerr<<"Caught a char";
    }
        catch(int i)
    {
        cerr<<"Caught a int";
    }
        catch(double d)
    {
        cerr<<"Caught a double";
    }
    cout<<"End of Try-Catch system";
    return 0;
}
