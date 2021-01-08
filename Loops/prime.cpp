#include<iostream>
using namespace std;
int main()
{
    int n,i,flag=0;
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout<<"Not Prime"<<endl;
    }
    else
    {
         cout<<"Prime"<<endl;
    }
    return 0;
}
