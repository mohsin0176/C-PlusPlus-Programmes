#include<iostream>
#include<process.h>
#include<conio.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    for(i=2;i<n/2;i++)
    {
        if(n%i==0)
        {
            cout<<n<<"is not Prime"<<endl;
            exit(0);
        }
    }
    cout<<n<<"is  Prime"<<endl;
    return 0;
}
