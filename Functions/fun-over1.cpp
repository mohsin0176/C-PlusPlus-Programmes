#include<iostream>
#include<conio.h>
using namespace std;

void repchar(char,int);
void repchar(char);
void repchar();
int main()
{
    repchar();
    repchar('=');
    repchar('+',30);
    return 0;
}
void repchar(char ch,int n)
{
    for(int j=0;j<n;j++)
    {
        cout<<ch;
    }
    cout<<'\n';

}
void repchar(char ch)
{
    for(int j=0;j<20;j++)
    {
        cout<<ch;
    }
    cout<<'\n';
}
void repchar(char ch,int n)
{
    for(int j=0;j<20;j++)
    {
        cout<<"*";
    }
    cout<<'\n';
}
