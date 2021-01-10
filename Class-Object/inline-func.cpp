#include<iostream>
#include<conio.h>
using namespace std;
class line
{
public:
    inline float mul(float x,float y)
    {
        return x*y;
    }
    inline float cube(float x)
    {
        return (x*x*x);
    }
};
int main()
{
    line obj;
    float val1,val2;
    cin>>val1>>val2;
    cout<<obj.mul(val1,val2);
    cout<<obj.cube(val1)<<obj.cube(val2);
    return 0;
}
