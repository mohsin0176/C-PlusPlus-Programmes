#include<iostream>
#include<conio.h>
#include<stdio.h>
struct Student{
int rno;
char name[25];
float marks[5];
};

void main()
{
    int i;
    Student s;
    cin>>s.rno;
    fflush(stdin);
    gets(s.name);
    for(i=0;i<5;i++)
    {
        cin>>s.marks[i];
    }
    cout<<s.rno;
    cout<<s.name;
    for(i=0;i<5;i++)
    {
        cout<<(i+1)<<s.marks[i];
    }
}
