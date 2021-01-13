#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    char ch;
    ifstream("filename.txt");
    ofstream("filename1.txt");
    if(!f1)
    {
        cerr<<"Can  not Open In file";
    }
       if(!f2)
    {
        cerr<<"Can  not Open out file";
    }
    while(f1&&f1.get(ch))
    {
       f2.put(ch);
    }

    cout<<"Copied Success";
    f1.close();
    f2.close();
    return 0;
}

