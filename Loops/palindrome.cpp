#include<iostream>
using namespace std;
int main()
{
    long int n,r,x,rev;
    cin>>n;
    x=n;
    rev=0;
    while(n!=0)
    {
        r=n%10;
        rev=(rev*10)+r;
        n=n/10;
    }
    if(rev==x)
    {
        cout<<"Palindrome";
    }
    else
    {
        cout<<"Not Palindrome";
    }
    return 0;
}
