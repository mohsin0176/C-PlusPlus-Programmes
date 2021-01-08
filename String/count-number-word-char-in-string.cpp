#include<iostream>
#include<string.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
    char str1[100];
    int i,j,k,c=0,w=1;
    gets(str1);
    i=strlen(str1);
    for(i=0;str1[i]!='\0';i++)
    {
        if((str1[i])==' ')&&()str1[i])!=' '))
            {
                w++;
            }
        else if(str1[i]!='.')
            {
                c++;
            }
    }
    cout<<w;
    cout<<c;
    return 0;
}
