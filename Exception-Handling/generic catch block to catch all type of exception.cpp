#include<iostream>
#include<conio.h>
using namespace std;
int test(int x)
{
    try{
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
    cout<<"End of try-Block"<<endl;
    }
    catch(...)
    {
        cerr<<"Caught An Exception";
    }
    cout<<"End of try-catch-Block";
}
int main()
{
    cout<<"Testing Generic Catch";
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
