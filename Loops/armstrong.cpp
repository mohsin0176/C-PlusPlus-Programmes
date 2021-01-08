#include<iostream>
using namespace std;
int main()
{
    int i,x,n,r,sum;
    cin>>n;
    x=n;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==x)
    {
        cout<<sum<<" "<<"is Armstrong Number";
    }
       else
       {
           cout<<sum<<" "<<"is Not Armstrong Number";
       }
    return 0;
}
