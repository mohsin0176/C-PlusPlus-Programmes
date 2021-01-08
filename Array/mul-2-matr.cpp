#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[2][3],b[3][2],c[2][2];
    int i,j,k;
    cout<<"Enter Matrix A:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter Matrix B:"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

        for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            c[i][j]=0;
            for(k=0;k<3;k++)
            {
                c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
            }
        }
    }
    cout<<"Matric A"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"Matric B"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<b[i][j]<<"\t";
        }
        cout<<"\n";
    }
       cout<<"Multplication Of Matrix A and B:"<<endl;
    cout<<"Matric C"<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}
