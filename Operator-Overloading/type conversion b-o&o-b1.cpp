#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
const int SZ=80;
class String
{
    char str[SZ];
public:
    String()
    {
        strcpy(str,"\0");
    }
    String(char s[ ])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str;
    }
    operator char*()
    {
        return str;
    }
};
int main()
{
    String s1;
    char st[]="c++";
    s1=st;
    String s2="Programming";
    String s3("Examples");
    cout<<(char*)s1;
    cout<<(char*)s2;
    cout<<(char*)s3;
    return 0;
}
