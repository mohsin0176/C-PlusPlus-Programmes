#include<iostream>
#include<string.h>
#include<conio.h>
int main()
{
    char string[26];
    cin.getline(string,21);
    for( int len=0;string[len]!='\0';len++)
    {
        int i,j,flag=1;
        for(i=0,j=len-1;i<len/2;i++,j--)
        {
            if(string[i]!=string[j])
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            cout<<"palindrome";
        }
        else
        {
            cout<<"Not Palindrome";
        }
    }
    return 0;
}
