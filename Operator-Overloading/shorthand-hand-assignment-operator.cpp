#include<iostream>
#include<conio.h>
#include<string.h>
const int SZ=80;
class String
{
    char str[SZ];
public:
    String()
    {
        strcpy(str,'\0');
    }
    String (char s[ ])
    {
        strcpy(str,s);
    }
    void display()
    {
        cout<<str;
    }
    void operator+=(String);
};
void String::operator+=(String s2)
{
    if((strlen(str)+strlen(s2.str))<SZ)
    {
        strcat(str,s2.str);
    }
    else
    {
        cout<<"String Too Long";
    }
}
int main()
{
    String s1("C++");
    String s2="Programming";
    String s3("Example");
    s1.display();
    s2.display();
    s3.display();
    s1+=s2;
    s1.display();
    s1+=s3;
    s1.display();
    return 0;
}
