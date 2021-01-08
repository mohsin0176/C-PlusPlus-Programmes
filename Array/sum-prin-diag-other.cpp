
#include<iostream>
using namespace std;
int main()
{
    int a[3][3];
    int i,j,spd=0,sod=0,sut=0,slt=0,sa=0;
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
            if(i==j)
                spd=spd+a[i][j];
            if((i+j)==2)
                sod=sod+a[i][j];
            if(i<=j)
                sut=sut+a[i][j];
            if(i>=j)
                slt=slt+a[i][j];
            sa=sa+a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
    cout<<sa<<endl;
    cout<<spd<<endl;
        cout<<sod<<endl;
    cout<<sut<<endl;
     cout<<slt<<endl;
    return 0;
}
