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
    String concat(String);
};
String String ::concat(String S2)
{
    String tmp;
    if((strlen(str)+strlen(s2.str))<SZ)
    {
        strcpy(tmp.str,str);
        strcat(tmp.str,s2.str);
    }
    else
    {
        cout<<"String Long";
    }
    return tmp;
}
void main()
{
    String s1("c++");
    String s2="Programming";
    String s3("Examples");
    String s4;
    s1.display();
    s2.display();
    s3.display();
    s4=s1;
    s4=s1.concat(s2);
    s4.display();
    s4.display();
    s4=s4.concat(s2);
    s4.display();
    s4=s4.concat(s3);
    s4.display();

}
