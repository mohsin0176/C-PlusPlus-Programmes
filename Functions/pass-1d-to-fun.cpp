#include<iostream>
#include<conio.h>

using namespace std;
const int SZ=5;
int display (int a[sz]);
int main()
{
    int ar[SZ],i;
    for(i=0;i<SZ;i++)
    {
        cin>>ar[i];
    }
    display(ar);
  return 0;
}
int display(int a[sz])
{
    for(int i=0;i<SZ;i++)
    {
        cout<<a[i];
    }

}
