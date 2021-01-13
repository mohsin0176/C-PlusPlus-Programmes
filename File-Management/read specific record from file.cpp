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
        cout<<name;
        cout<<age;
    }
};
int main()
{
    char ch;
    Person p;
    ifstream in;
    in.open("person.txt");

    in.seekg(0,ios::end);
    int size=in.tellg();
    int n=size/sizeof(p);
    cin>>n;
    int pos=(n-1)*sizeof(p);
    in.seekg(pos);
    in.read((char*)&p,sizeof(p));
    p.showData();
    in.close();
    return 0;
}
