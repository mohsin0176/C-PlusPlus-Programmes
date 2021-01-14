#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[2][3]={{10,20,30},{40,50,60}};
    int *p;
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(*(a+i)+j)<<"\t";
        }
        cout<<"\n";
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(a[i]+j)<<"\t";
        }
        cout<<"\n";
    }
    p=&a[0][0];
        for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<*(p+3*i+j)<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
