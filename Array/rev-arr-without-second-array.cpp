#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,j,t;
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    for(i=0,j=5-1;i<5/2,i++;j--)
    {
        t=arr[i];
        arr[i]=arr[j];
        arr[j]=t;
    }
    for(i=0;i<5;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
