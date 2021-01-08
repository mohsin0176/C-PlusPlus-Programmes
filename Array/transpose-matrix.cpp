#include<iostream>
using namespace std;
int main()
{
    int a[2][3],b[3][2];
    int i,j;
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        cin>>a[i][j];
    }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        b[j][i]=a[i][j];
    }
    }
    for(i=0;i<2;i++)
    {
    for(j=0;j<2;j++)
    {
        cout<<b[i][j]<<"\n";
    }
    cout<<endl;
    }
    return 0;
}
