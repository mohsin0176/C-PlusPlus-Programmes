
#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
    char name[25];
    int age;
    ofstream out("txt.txt");
    cin.getline(name,25);
    cin>>age;
    out<<name<<age;
    out.close();
    ifstream in("txtt.txt");
    in>>name>>age;
    cout<<name<<age;
    in.close();
    return 0;

}
