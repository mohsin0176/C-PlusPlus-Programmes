#include<iostream>
#include<conio.h>
using namespace std;
class Counter
{
    unsigned int count;
public:
    Counter()
    {
        count=0;
    }
    Counter (int cnt)
    {
        count=cnt;

    }
    int getCount()
    {
        return count;
    }
    Counter operator ++()
    {
        count++;
        return Counter(count);
    }
};
int main()
{
    Counter c1,c2;
    cout<<c1.getCount();
    cout<<c2.getCount();
    ++c1;
    c2=++c1;
    cout<<c1.getCount();
    cout<<c2.getCount();
    return 0;
}
