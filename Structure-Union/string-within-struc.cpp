#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<string.h>
using namespace std;
 const int SIZE=3;
 struct Book
 {
     char name[25];
     int page;
     int price;
 };
int main()
{
    int i;
    Book b1[SIZE];
    for(i=0;i<SIZE;i++)
    {
        cin>>b1[i].name;
        cin>>b1[i].age;
        cin>>b1[i].price;
    }
    for(i=0;i<SIZE;i++)
    {
        cout<<b1[i].name;
        cout<<b1[i].page;
        cout<<b1[i].price;
    }

return 0;
}
