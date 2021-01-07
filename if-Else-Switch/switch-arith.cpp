#include<iostream>
using namespace std;
int main()
{
    char c;
    cin>>c;
    int a,b,res;
    cin>>a>>b;
    switch(c)
    {
    case '+':
        res=a+b;
        cout<<res;
        break;
    case '-':
        res=a-b;
        cout<<res;
        break;
    case '*':
        res=a*b;
        cout<<res;
        break;
    case '/':
        res=a/b;
        cout<<res;
        break;
    }
}
