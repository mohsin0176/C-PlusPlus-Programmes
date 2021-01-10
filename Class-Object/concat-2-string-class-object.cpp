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
    void conat (String);
};
void String :: conact(String s2)
{
    if((strlen(str)+strlen(s2.str))<SZ)
    {
        strcat(str,s2.str);
    }
    else
    {
        cout<<"String too Long";
    }
}
void main()
{
    String s1("C++");
    String s2="Programming";
    String s3("Examples");
    String s4;
    s1.display();
    s2.display();
    s3.display();
    s4=s1;
    s4.concat(s2);
    s4.display();
    s4.conact(s3);
    s4.display();
}
