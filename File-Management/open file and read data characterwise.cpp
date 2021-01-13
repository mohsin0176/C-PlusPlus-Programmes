#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    char ch;
    ifstream in("file.txt");
    while(in)
    {
        in.get(ch);
        cout<<ch;
    }
    in.close();
    return 0;
}
