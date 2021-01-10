
#include<iostream>
#include<conio.h>
#define PI 3.1416
using namespace std;
const pi=3.1416;
class shape
{
private:
    float r;
    int h,w;
public:
    float area(float rd)
    {
        r=rd;
        return (pi*r*r);
    }
    int area(int ht,int wt)
    {
        h=ht;
        w=wt;
        return (h*w);
    }
};
void main()
{
    float radius;
    int width,height;
    shape s;
    cin>>radius;
    cout<<s.area(radius);
    cin>>height>>width;
    cout<<s.area(height,width);
}
