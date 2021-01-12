#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=a-b;
    try
    {
        if(c !=0)
        {
            cout<<a/c<<endl;
        }
        else
        {
            throw(c);
        }
    }
    catch(int i)
    {
        cerr<<i;
    }
    cout<<"END";
    return 0;
}
