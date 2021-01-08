#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char str1[]="C++";
    char str2[]="Prog..Example";
    int i,l;
    for(i=0;str1[i]!='\0';i++)
    {
        l=i;
        for(i=0;str2[i]!='\0';i++)
        {
            str1[l+i]=str2[i];
        }
        str1[l+i]='\0';
    }
    cout<<str1;
    cout<<str2;
    return 0;
}
