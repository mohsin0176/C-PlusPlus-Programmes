#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char s1[25]="NILS";
    char *ps1="NILS";
    char s2[25];
    char *ps2;
    cout<<s1;
    cout<<ps1;
    ps1=ps2;
    cout<<ps2;
    ps1++;
    cout<<ps1;
    return 0;
}
