#include<iostream>
#include<conio.h>
using namespace std;
void display(char*);
int main()
{
    char a[]="www.developer.com";
    display(a);
    return 0;
}
void display(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++)
    {
        cout<<*(p+i);
    }
}
