#include<iostream>
#include<conio.h>
#include<fstream>
#include<process.h>
using namespace std;
int main(int argc,char* argv[])
{
    if(argc !=3)
    {
        cerr<<"Copy Scource Dest";
        exit(1);
    }
    ifstream in(argv[1],ios::binary);
    if(!in)
    {
        cerr<<"can not open Source File";
        exit(1);
    }
    ofstream in(argv[2],ios::binary);
    if(!in)
    {
        cerr<<"can not open Destination File";
        exit(1);
    }
    char ch;
    while(in.get(ch))
        out.put(ch);
    in.close();
    out.close();

}


