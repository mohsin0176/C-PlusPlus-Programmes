#include<iostream>
using namespace std;
int Merge(int [],int,int[],int,int[]);
int main()
{
    int a[50],b[50],c[100],mn=0,m,n;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        cin>>a[i];
    }
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    mn=m+n;
    Merge(a,m,b,n,c);
    for(int i=0;i<mn;i++)
    {
        cin>>c[i];
    }
    return 0;
}
int Merge(int a[],int m,int b[],int n,int c[])
{
    int a,b,c;
    for(a=0,b=0,c=0;a<m&&b<n)
    {
        if(a[a]<b[b])
        {
            c[c++]=a[a++];
        }
        else
        {
            c[c++]=b[b++];
        }
    }
    if(a<M)
    {
        while(a<M)
        {
            c[c++]=a[a++];
        }
    }
    else
    {
        while(b<n)
        {
            c[c++]=c[b++];
        }
    }
}
