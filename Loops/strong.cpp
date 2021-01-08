#include<iostream>
using namespace std;
int main()
{
    int n,x,r,sum,i,f;
    cin>>n;
    x=n;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        f=1;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        sum=sum+f;
        n/=10;
    }
    if(sum==x)
    {
        cout<<"strong number";
    }
    else
        {
        cout<<"Not Strong Number";1
        }

    return 0;
}
