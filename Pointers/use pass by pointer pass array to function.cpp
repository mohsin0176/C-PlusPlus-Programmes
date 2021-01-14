#include<iostream>
#include<conio.h>
using namespace std;
void display(int*);
int main()
{
    int a[]={10,20,30,40,50,60};
    display(a);

    return 0;
}
void display(int *p)
{
    int i;
    for(i=0;i<5;i++)
    {
        cout<<*(p+i)<<endl;
        cout<<(p+i)<<endl;
    }
}
