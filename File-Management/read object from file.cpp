#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
class Person
{
    char name[25];
    int age;
public:
    void getData()
    {
        cin.getline(name,25);
        cin>>age;
    }
    void showData()
    {
        cout<<name<<age;
    }
};
int main()
{
    Person p;
    ifstream in("person.txt");
    in.read((char*)&p,sizeof(p));
    p.showData();
    in.close();
    return 0;
}
