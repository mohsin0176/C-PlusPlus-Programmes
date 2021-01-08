#include<iostream>
using namespace std;
int main()
{
    int n[]={10,20,30,40,50,60,70};
    int i,j;
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<endl;
    }
    for(i=0;i<5-1;i++)
    {
        for(j=0;j<5-i-1;j++)
        {
            if(n[j]>n[j+1])
            {
                int t=n[j];
                n[j]=n[j+1];
                n[j+1]=t;
            }
        }
    }
    for(i=0;i<5;i++)
    {
        cout<<n[i]<<endl;
    }
    return 0;
}
