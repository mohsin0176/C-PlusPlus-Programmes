#include<iostream>
using namespace std;
int main()
{
    int num[5];
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        cout<<(i+1)<<endl;
        cin>>num[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<num[i]<<endl;
    }
    return 0;
}
