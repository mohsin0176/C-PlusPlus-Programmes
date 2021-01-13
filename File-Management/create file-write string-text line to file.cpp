#include <fstream>
#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;
int  main()
{
    int x;
    ofstream out("test.txt");
    cin>> x;
    out<<x<<endl;
    out<<"C++ Programming Example\n";
    out<<"Nil TechSys\n";
    cout<<"Data Written";
    out.close();
    return 0;
}
