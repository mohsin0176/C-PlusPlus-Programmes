#include<iostream>
using namespace std;

int main()
{

    int marks;
    cin>>marks;
    if(marks>=80)
    {
        cout<<"A+";
    }
       else if(marks>=70)
    {
        cout<<"A";
    }
           else if(marks>=60)
    {
        cout<<"A-";
    }
           else if(marks>=50)
    {
        cout<<"B+";
    }
           else if(marks>=40)
    {
        cout<<"B";
    }
           else if(marks>=33)
    {
        cout<<"B-";
    }
    else
    {
        cout<<"Fail";
    }

    return 0;
}



