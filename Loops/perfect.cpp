#include<iostream>
using namespace std;
int main()
{
    int i,n,sum;
    cin>>n;
    sum=0;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==n)
    {
        cout<<"Perfect Number";
    }
    else
    {
        cout<<"Not Perfect Number";
    }
    return 0;
}
