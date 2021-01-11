#include<iostream>
#include<conio.h>
class Volume
{
    int length,breadth,height;
public:
    volume(int l,int b,int h)
    {
        length=l;
        breadth=b;
        height=h;
        cout<<length;
        cout<<breadth;
        cout<<height;
    }
    void display()
    {
        cout<<length*breadth*height;
    }
};
void main()
{
    volume a(5,10,15);
    a.display();

}
