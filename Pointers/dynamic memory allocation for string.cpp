#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    char s1[25]="C++ Programming Example";
    int len=strlen(s1);
    char *ps;
    ps=new char[len+1];
    strcpy(ps,s1);
    cout<<ps;
    delete ps;
    return 0;
}
