#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class person
{
    char name[20];
    float age;
public:
    person(char *s,float a)
    {
        strcpy(name,s);
        age=a;
    }
    person& person ::greater( person &x )
    {
        if(x.age>=age)
        {
            return x;
        }
        else
        {
            return *this;
        }
    }
    void display(void)
    {
        cout<<name<<age;
    }
};
int main()
{
    person p1("john",37.50),p2("ahmed",29),p3("hebber",40);
    person p=p1.greater(p3);
    p.display();
    p=p1.greater(p2);
    p.display();
    return 0;
}
