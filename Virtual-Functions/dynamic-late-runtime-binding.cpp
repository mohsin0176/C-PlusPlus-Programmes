#include<iostream>
#include<conio.h>
using namespace std;
class Shape
{
protected:
    float width,height;
public:
    Shape(float a=0.0,float b=0.0)
    {
        width=a;
        height=b;
    }
    virtual void area()
    {
        cout<<"Class Area"<<0;
    }
};
class Rectangle :public Shape
{
    public:
        Rectangle(float a=0.0,float b=0.0)
{

}
void area()
{
    cout<<width*height;
}
};
class Triangle :public Shape
{
    public:
        Triangle(float a=0.0,float b=0.0)
{

}
void area()
{
    cout<<width*height*.5;
}
};

int main()
{
    Shape *shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);
    shape =&rec;
    shape->area();
    shape=&tri;
    shape->area();
    return 0;
}

