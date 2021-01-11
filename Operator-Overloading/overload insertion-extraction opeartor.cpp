#include<iostream>
#include<conio.h>
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public:
    Distance()
    {
        feet=0;
        inches=0;
    }
    friend istream& operator>>(istream&,Distance&);
    friend ostream& operator>>(ostream&,Distance&);

};
istream& operator>>(istream &in,Distance &d)
{
    in>>d.feet>>d.inches;
}
ostream& operator<<(ostream &out,Distance &d)
{
    out<<d.feet<<d.inches;
}
int main()
{
    Distance d1;
    Distance d2;
    cin>>d1>>d2;
    cout<<d1<<d2;
    return 0;
}
