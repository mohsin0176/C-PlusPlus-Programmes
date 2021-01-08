#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main()
{
    char str1[25],str2[25],str3[25];
    cin>>str1>>str2;
    strcpy(str3,str2);
    strcpy(str2,str1);
    strcpy(str1,str3);
    cout<<str1<<str2;
    return 0;
}
