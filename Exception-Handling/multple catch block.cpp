#include<iostream>
#include<conio.h>
using namespace std;
void test(int x)
{
    try
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
            throw 1;
        }
        cout<<"End of Try Block";
    }
    catch(char c)
    {
        cerr<<"Caught a char";
    }
    catch(int i)
    {
        cerr<<"Caught an int";
    }
    catch(double d)
    {
        cerr<<"Caught a double";
    }
    cout<<"End of Try-Catch Block";
}
int main()
{
    cout<<"Testing Multiple catches";
    cout<<"x==0";
    test(0);
    cout<<"x==1";
    test(1);
    cout<<"x==2";
    test(2);
    cout<<"x==3";
    test(3);
    return 0;
}
