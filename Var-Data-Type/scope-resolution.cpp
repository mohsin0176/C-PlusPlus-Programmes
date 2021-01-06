#include<iostream>
#include<conio.h>
using namespace std;

int n=1;

int main()
{

    {
        int n=2;
        {
             int n=3;
            {
                int n=4;
                cout<<n;
                cout<<::n;
            }
            cout<<n;
                cout<<::n;
        }
        cout<<n;
                cout<<::n;
    }
    return 0;
}
