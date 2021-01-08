#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
    char mpass[15]="computer",npass[7];
    cin>>npass;
    int ctr;
    ctr=strcmpi(mpass,npass);
    if(ctr==0)
    {
        cout<<"Correct";
    }
    else
    {
        cout<<"Wrong";
    }
    return 0;
}
