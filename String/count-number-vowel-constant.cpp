#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char line[81];
    int vowctr=0,conctr=0;
    gets(line);
    for(int i=0;line[i]!='\0';i++)
    {
        switch(line[i])
        {
        case 'a':
        case 'A':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'o':
        case 'O':
        case 'U':
        case 'u':
            vowctr++;
            break;
        default:
            conctr++;
            break;
        }
    }
    cout<<vowctr;
    cout<<conctr;
    return 0;
}
