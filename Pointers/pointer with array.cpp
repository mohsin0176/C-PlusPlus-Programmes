#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int numbers[50],*ptr;
    int n,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>numbers[i];
    }
    ptr=numbers;
    int sum=0;
    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
        {
            sum=sum+*ptr;
        }
        ptr++;
    }
    cout<<sum;
    return 0;
}
