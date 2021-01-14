#include<iostream>
#include<conio.h>
using namespace std;
void display(char*);
int main()
{
    char s1[25]="NILS";
    display(s1);
    return 0;
}
void display(char *ps)
{
    while(*ps)
    {
        cout<<*ps;
        ps++;
    }
}
