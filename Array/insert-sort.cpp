#include<iostream>
#include<conio.h>
#include<limits.h>
using namespace std;
int main()
{
    int i,j,tmp;
    int n[]={0,30,10,50,60,20,80,140,100};
    for(i=1;i<=5;i++)
    {
        cout<<n[i]<<"\t";
    }
    cout<<endl;
    n[0]=INT_MIN;
    for(i=1;i<=5;i++)
    {
        tmp=n[i];
        j=i-1;
        while(tmp<n[j])
        {
            n[j+1]=n[j];
            j--;
        }
        n[j+1]=tmp;
    }
    for(i=1;i<=5;i++)
    {
        cout<<n[i]<<"\t";
    }
    return 0;
}

