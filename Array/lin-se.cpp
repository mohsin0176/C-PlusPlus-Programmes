#include<iostream>
using namespace std;
int main()
{
    int num[10],i,pos=-1,value;

    for(i=0;i<10;i++)
    {
        cin>>num[i];
    }
    cin>>value;
    for(i=0;i<10;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        cout<<value<<"Not found";
    }
    else

    {
        cout<<value<<"Found"<<pos<<"location";
    }
    return 0;
}
