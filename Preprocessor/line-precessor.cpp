#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    #line 100
    cout<<__FILE__;
    cout<<__LINE__;
    #line 200
      cout<<__FILE__;
    cout<<__LINE__;

    return 0;
}
