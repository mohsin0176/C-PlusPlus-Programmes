#include<iostream>
#include<conio.h>
#include<string.h>
const int MAX=80;
int main()
{
    char str1[]="www.w3school.com";
    char str2[MAX];
    strcpy(str2,str1);
    cout<<str2;
    return 0;
}
