#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
enum boolean {false,true};
const int SZ=80;
class string
{
char str[SZ];
public:
String()
{
    strcpy(str,"\0");
}
String (char s[])
{
    strcpy(str,s);
}
void display()
{
    cout<<str;
}
booelan operator==(String);
};

boolean String::operator==(String s2)
{
    return ((strcmp(str,s2.str)==0)?true:false);
}
int main()
{
    String s1("Nils");
    String s2="Nils";
    String s3("Nils");
    if(s1==s2)
    {
        cout<<"s1=s2";
    }
    else
    {
       cout<<"s1!=s2";
    }
    if(s1==s3)
    {
        cout<<"s1==s3";
    }
    else
    {
        cout<<"s1 != s3";
    }
    }
    return 0;
}
