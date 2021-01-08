
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char name[5][20]={"Piyus","chaowla","nils","mohsin","uiot"};
    int i;
    for(i=0;i<5;i++)
    {
        cout<<i+1<<"\t"<<name[i]<<endl;
    }
    return 0;
}
