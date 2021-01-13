#include<fstream>
#include<iostream>
#include<conio.h>
using namespace std;
int main(int argc,char* argv[])
{
    cout<<"No of Argument";
    for(int i=0;i<argc;i++)
    {
        cout<<i<<argv[i];
    }
    return 0;
}
