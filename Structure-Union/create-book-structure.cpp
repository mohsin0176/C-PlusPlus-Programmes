#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
struct book
{
    char name[25];
    char author[20];
    float price;
};
int  main()
{
    book b;
    gets(b.name);
    gets(b.author);
    cin>>b.price;
    cout<<b.name;
    cout<<b.author;
    cout<<b.price;
    return 0;
}
