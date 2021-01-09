#include<iostream>
#include<iomanip.h>
#include<conio.h>
using namespace std;
void main()
{
    int ar[2][3]={{10,20,30},{40,50,60};
    display(ar);

}
void display(int a[2][3])
{
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<endl;
    }
}
