#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class Person
{
    char name[25];
    int age;
public:
    void getdata()
    {
        cin.getline(name,25);
        cin>>age;
    }
    void showdata()
    {
        cout<<name<<age;
    }
};
int main()
{
    Person p;
    ofstream out("person.txt");
    p.getdata();
    out.write((char*)&p,sizeof(p));
    out.close();
    return 0;

}
