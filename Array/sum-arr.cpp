#include<iostream>
using namespace std;
int main()
{
    int sum;
    int arr[5];
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    cout<<sum;
    return 0;
}
