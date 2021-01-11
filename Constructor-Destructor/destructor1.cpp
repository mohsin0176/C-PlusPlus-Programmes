#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class dest{
public:
    dest()
         {
             count++;
             cout<<"constructor"<<endl;
         }
     ~dest()
     {
         count--;
             cout<<"destructor"<<endl;
     }


         };

int main()
{

    dest d1,d2,d3,d4;
    {
        dest d5,d6;
    }
    {
        dest d7;
    }
    return 0;
}
