#include<iostream>
using namespace std;
int main()
{
    int i,j,a[5][5],b[5][5],c[5][5];
    for(i=0;i<=4;i++)
    {
    for(j=0;j<=4;j++)
    {
        cin>>a[i][j];
        cout<<" ";
    }
    cout<<endl;
    }
    for(i=0;i<=4;i++)
    {
    for(j=0;j<=4;j++)
    {
        cin>>b[i][j];
        cout<<" ";
    }
     cout<<endl;
    }
    for(i=0;i<=4;i++)
    {
    for(j=0;j<=4;j++)
    {
        c[i][j]=a[i][j]+b[i][j];
    }
    }
    for(i=0;i<=4;i++)
    {
    for(j=0;j<=4;j++)
    {
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
    }
    return 0;
}
