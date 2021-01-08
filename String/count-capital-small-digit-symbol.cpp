
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,c=0,s=0,d=0,ss=0;
    char ch[100];
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>=65 && ch[i]<=90)
        {
            c++;
        }
        else if(ch[i]>=97 && ch[i]<=122)
        {
            s++;
        }
        else if(ch[i]>=48 && ch[i]<=57)
        {
            d++;
        }
        else
            {
            ss++;
            }
    }
    cout<<c<<endl;
    cout<<s<<endl;
    cout<<d<<endl;
    cout<<ss<<endl;
    return 0;
}
