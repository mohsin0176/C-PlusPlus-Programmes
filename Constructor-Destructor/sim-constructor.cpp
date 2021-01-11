#include<iostream>
#include<conio.h>
using namespace std;
class Demo
{
public:
    demo()
    {
        cout<<"constructor"<<endl;
        cout<<"called without object"<<endl;
    }
};
int main()
{
    Demo d;
return 0;
}
