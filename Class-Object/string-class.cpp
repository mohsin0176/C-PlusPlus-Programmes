#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class String
{
    char str[80];
public:
    String()
    {
        str[0]='\0';

    }
    String (char s[])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str;
    }
};
void main()
{
    String s1("c++");
    String s2="Programming";
    String s3("Examples");
    s1.display();
    s2.display();
    s3.display();

}
