#include<iostream>
using namespace std;
int main()
{
    int num[10],i,beg,end,mid,pos=-1,value;
    for(i=0;i<10;i++)
    {
        cin>>num[i];
    }
    cin>>value;
    beg=0;
    beg=10-1;
    while(beg<=end)
    {
        mid=(beg+end)/2;
        if(value==num[mid])
        {
            pos=mid+1;
            break;
        }
        else if(value>=num[mid])
        {
            beg=mid+1;
        }
        else
        {
            end=mid-1;
        }
    }
    if(pos==-1)
    {
        cout<<value<<"not found"<<end;
    }
    else
    {
        cout<<value<<"position is"<<pos<<end;
    }
    return 0;
}
