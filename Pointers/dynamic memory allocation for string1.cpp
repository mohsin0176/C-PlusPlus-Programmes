
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class String
{
    char *ps;
public:
    String(char s[])
    {
        int len=strlen(s);
        ps=new char[len+1];
        strcpy(ps,s);
    }
    ~String()
    {
        delete ps;
    }
    void display()
    {
        cout<<ps;
    }
};
int main()
{
    String s1="NILS";
    s1.display();
    return 0;
}
