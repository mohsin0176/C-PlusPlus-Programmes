#include<iostream>
using namespace std;
int repchar(char ='*',int=20);
int main()
{
    repchar();
    repchar('=');
    repchar('+',30);

    return 0;
}
int repchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
    cout<<"\n";
}
