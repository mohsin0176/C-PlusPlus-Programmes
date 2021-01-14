#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int *p;
    int i;
    p=new int[5];
    for(i=0;i<5;i++)
    {
        cin>>*(p+i);
    }
    for(i=0;i<5;i++)
    {
        cout<<*(p+i);
    }
    delete[ ] p;
    return 0;
}
