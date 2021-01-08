#include<iostream>
using namespace std;
const int MAX=200;
int main()
{
    char str[MAX];
    cin.get(str,MAX,'$');
    cout<<str;
    return 0;
}
