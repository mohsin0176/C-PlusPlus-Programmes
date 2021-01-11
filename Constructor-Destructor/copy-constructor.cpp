#include<iostream>
#include<conio.h>
using namespace std;
class code{

int id;
public:
    code(){}
    code(int a)
    {
        id=a;
    }
    code(code &x)
    {
        id=x.id;
    }
    void display(void)
    {
        cout<<id;
    }
};
int main()
{
    code A(100);
    code B(A);
    code C=A;
    code D;
    D=A;
    cout<<A.display();
    cout<<B.display();
    cout<<C.display();
    cout<<D.display();



    return 0;
}
