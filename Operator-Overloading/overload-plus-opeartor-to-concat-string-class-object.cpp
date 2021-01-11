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
    String operator +(String);
};
String String::operator+(String s2)
{
    String tmp;
    if((strlen(str)+strlen(s2.str))<SZ)
    {
        strcpy(tmp.str,str);
        strcat(tmp.str,s2.str);
    }
    else
    {
        cout<<"String Too Long";
    }
    return tmp;
}

int main()
{
    String s1("c++");
    String s2="Programming";
    String s3("Examples");
    String s4;
    s1.display();
    s2.display();
    s3.display();
    s4=s1;
    s4=s1+s2;
    s4.display();
    s4=s4+s3;
    s4.display();
    return 0;
}
