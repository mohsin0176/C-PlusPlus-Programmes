
#include<iostream>
#include<conio.h>

using namespace std;
int  main()
{
    int a[3][3];
    int i,j,gt=0;
    int rs[3]={0},cs[3]={0};
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            rs[i]=rs[i]+a[i][j];
            cs[j]=cs[j]+a[i][j];
            gt=gt+a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<"|"<<rs[i]<<endl;
    }
    for(i=0;i<3;i++)
    {

            cout<<cs[i];
    }
    cout<<gt;
    return 0;
}
