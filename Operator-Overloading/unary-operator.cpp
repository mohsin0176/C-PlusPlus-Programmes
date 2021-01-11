#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
class increase
{
private:
    int data;
public:
    increase()
    {
        data=0;
    }
    int display()
    {
        cout<<data<<endl;
    }
    void operator++()
    {
        data++;
    }
};
int main()
{
    increase i1,i2;
    i1.display();
    i2.display();
    i1++;
    ++i1;
    i2++;
    i1.display();
    i2.display();
    return 0;
}
