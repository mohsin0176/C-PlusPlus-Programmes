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
        cin>>name>>age;
    }
    void showdata()
    {
        cout<<name<<age;
    }
};
int main()
{
    char ch;
    Person p;
    fstream file;
    file.open("p.txt",ios::app|ios::out|ios::in);
    do
    {
        p.getdata();
        file.write((char*)&p,sizeof(p));
        cin>>ch;
    }
    while(ch=='y'||ch=='Y');
    file.seekg(0);
    file.read((char*)&p,sizeof(p));
    while(!file.eof())
    {
        p.showdata();
        file.read((char*)&p,sizeof(p));
    }
    file.close();
    return 0;

}

