#include<iostream>
#include<conio.h>
#include<process.h>
using namespace std;
int length(char ch[])
{
    int i,l=0;
    for(i=0;ch[i]!='\0';i++)
    {
        l=i;
    }
    return l;
}

int main()
{
    int len=0;
    char str[20];
    cin>>str;
    len=length(str);
    cout<<len;
    return 0;
}
