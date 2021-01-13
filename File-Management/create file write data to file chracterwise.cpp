#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    char str[50]="C++ Programming Example";
    ofstream out("my.txt");
    int i;
    for(i=0;str[i]!='\n';i++)
    {
        out.put(str[i]);
    }
    cout<<"Data Written";
    out.close();
    return 0;
}
