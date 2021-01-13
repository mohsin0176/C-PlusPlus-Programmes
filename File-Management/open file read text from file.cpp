#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    char str[50];
    ifstream in("filename.txt");
    while(in)
    {
        in.getline(str,50);
        cout<<str<<endl;
    }
    in.close();

    return 0;
}
