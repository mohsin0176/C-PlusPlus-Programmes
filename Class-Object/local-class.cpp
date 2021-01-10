#include<iostream>
#include<conio.h>
using namespace std;
void fun()
{
    class Test
    {
    public:
        void method()
        {
            cout<<"Local Class Method";
        }
    };
    Test t;
    t.method();
}
int main()
{
    fun();
    return 0;
}
