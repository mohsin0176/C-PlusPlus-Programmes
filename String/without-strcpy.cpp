#include<iostream>
#include<conio.h>
const int MAX=80;
int main()
{
    char str1[]="c++ programming";
    char str2[];
    for(int j=0;str1[j]!='\0';j++)
    {
        str2[j]=str1[j];
        str2[j]='\0';
    }
    cout<<str1;
    cout<<str2;
    return 0;
}
