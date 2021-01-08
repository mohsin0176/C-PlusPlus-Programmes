#include<iostream>
using namespace std;
int main()
{
    int a,b,s,hcf,i,lcm;
    cin>>a>>b;
    if(a<b)
    {
        s=a;
    }
    else
    {
        s=b;
    }
    for(i=1;i<=s;i++)
    {
        if((a%i==0)&&(b%i==0))
        {
            hcf=i;
        }
    }
    cout<<hcf<<endl;
    lcm=(a*b)/hcf;
    cout<<lcm;
    return 0;
}
