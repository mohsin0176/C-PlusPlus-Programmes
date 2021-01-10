#include<iostream>
#include<conio.h>
using namespace std;
class member
{
public:
    void inside()
    {
        cout<<"Inside function";
    }
    void outside();
};
void member::outside()
{
    cout<<"Outside function";
}
void main()
{
    member m;
    m.inside();
    m.outside();
}
