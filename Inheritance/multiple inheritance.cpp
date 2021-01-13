#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
public:
    float area_calc(float l,float b)
    {
        return l*b;
    }
};
class Perimeter
{
public:
    float peri_calc(float l,float b)
    {
        return 2*l*b;
    }

};
class Rectangle:private Area,private Perimeter
{
private:
    float length,breadth;
public:
    Rectangle():length(0.0),breadth(0.0){}
    void get_data()
    {
        cin>>length;
        cin>>breadth;
    }
    float area_calc()
    {
        return Area::area_calc(length,breadth);
    }
    float peri_calc()
    {
        return Perimeter::peri_calc(length,breadth);
    }

};
int main()
{
    Rectangle r;
    r.get_data();
    cout<<r.area_calc();
    cout<<r.peri_calc();
    return 0;
}
