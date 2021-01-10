#include<iostream>
#include<conio.h>
using namespace std;
class stat{

int code;
static int count;
public:
    stat()
    {
        code=++count;
    }
    void showcode()
    {
        cout<<code;
    }
    static void showcount()
    {
        cout<<count;
    }
};
int stat::count;
void main()
{
    stat obj1,obj2;
    obj1.showcode();
    obj1.showcount();
    obj2.showcode();
    obj2.showcount();

}
