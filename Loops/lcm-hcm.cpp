#include<iostream>
using namespace std;
int main()
{
    int a,b,g,hcf,i,lcm;
    cin>>a>>b;
    if(a>b)
    {
        g=a;
    }
    else
    {
        g=b;
    }
    for(i=g;i<=(a*b);i++)
    {
        if((i%a==0)&&(i%b==0))
        {
            lcm=i;
            break;
        }
    }
    cout<<lcm<<endl;
    hcf=(a*b)/lcm;
    cout<<hcf<<endl;
    return 0;
}
