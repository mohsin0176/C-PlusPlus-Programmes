#include<iostream>
#include<conio.h>
using namespace std;
class height
{
private:
    int feet;
    float inch;
public:
    height()
    {
        feet=inches=0;
    }
    height(int f,float i)
    {
        feet=f;
        inches=i;
    }
    void show()
    {
        cout<<feet<<inches;
    }
    void operator+=(height h)
    {
        feet+=h.feet;
        inches+=h.inches;
        if(inches>=12)
        {
            inches=12;
            feet++;
        }
    }
};
int main()
{
    height h1(10,15),h2(7,18);
    h1+=h2;
    h1.show();
    return 0;
}
