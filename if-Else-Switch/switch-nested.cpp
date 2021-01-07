#include<iostream>
#include<conio.h>
using namespace std;

int main()
{

    int a=100;
    int b=200;
    switch(a)
    {
    case 100:
        cout<<"In Outer Switch"<<endl;
        switch(b)
        {
        case 200:
            cout<<"Inner switch"<<endl;
        }
    }
    cout<<a<<endl;
    cout<<b;
    return 0;
}
