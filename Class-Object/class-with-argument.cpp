#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class stringfun{
char name[20];
public:
    void concatString(char a[],char b[])
    {
        strcat(a,b);
        strcpy(name,a);
    }
    void display()
    {
        cout<<name;
    }

};
void main()
{
    char str1[10],str2[10];
    stringfun sf;
    gets(str1);
    gets(str2);
    sf.concatString(str1,str2);
    sf.display();
}
