#include<iostream>
#include<conio.h>
using namespace std;
class myclass
{
private:
    int t;
public:
    myclass()
    {
        cout<<"constructor";
    }
    ~myclass()
    {
        cout<<"destructor";
    }
    void set (int d)
    {
        t=d;
    }
    void show()
    {
        cout<<t<<endl;
    }
};
int main()
{
    myclass m1,m2;
    m1.set(2);
    m2.set(6);
    m1.show();
    m2.show();
    cout<<"latest statement";
    return 0;
}
