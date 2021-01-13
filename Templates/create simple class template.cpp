#include<iostream>
#include<conio.h>
using namespace std;
template <class T>
class A
{
private :
    T x;
public:
    A(){}
    A(T a){x=a;}
    void show()
    {
        cout<<x;
    }
};
int main()
{
    A<char>a1('B');
    a1.show();
    A<int>a2(10);
    a2.show();
    A<float>a3(12.34f);
    a3.show();
    A<double>a4(12.50);
    a4.show();
    return 0;

}
