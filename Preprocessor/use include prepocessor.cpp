
#include<iostream>
#include<conio.h>
using namespace std;
Coding [myheader.h]:
    int add(int x,int y)
    {
        int s;
        s=x+y;
        return s;

    }

    int sub(int x,int y)
    {
        int s;
        d=x-y;
        return d;

    }

    Coding:
        #include<iostream>
        #include<conio.h>
        #include "myheader.h"
        int main()
        {
            int a=20,b=10,res;
            res=add(a,b);
            cout<<res;
            res=sub(a,b);
            cout<<res;

            return 0;
        }
