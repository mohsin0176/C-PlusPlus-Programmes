#include<iostream>
using namespace std;
int main()
{
    long int n,r,sum;
    cin>>n;
    sum=0;
    while(n!=0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<sum;

    return 0;
}
