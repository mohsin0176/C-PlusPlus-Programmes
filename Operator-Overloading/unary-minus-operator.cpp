#include<iostream>
#include<conio.h>
using namespace std;
class counter
{
unsigned int count;
public:
    Counter()
    {
        count=0;
    }
    Counter (int c)
    {
        count=c;
    }
    int getCount()
    {
        return count;
    }
    void operator-()
    {
        count=-count;
    }
};
int main()
{
    Counter c1(10),c2(20);
    cout<<c1.getCount();
    cout<<c2.getCount();
    -c2;
    cout<<c1.getCount();
    cout<<c2.getCount();
    return 0;
}
