#include<iostream>
using namespace std;
int main()
{
    char choice;
    int cel,far,temp;
    cin>>cel>>far>>choice;
    if(choice=='cel')
    {
        temp=(far-32)/1.8;
        cout<<temp;
    }
    else
    {
        temp=(cel*1.8)+32;
        cout<<temp;
    }

    return 0;
}
