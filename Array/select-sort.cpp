#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int i,j,small,pos,tmp;
    int n[]={30,40,50,10,20};
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<endl;
    }
    for(i=0;i<5;i++)
    {
        small=n[i];
        pos=i;
        for(j=i+1;j<5;j++)
        {
            if(n[j]<small)
            {
                small=n[j];
                pos=j;
            }
        }
        tmp=n[i];
        n[i]=n[pos];
        n[pos]=tmp;
    }
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}
