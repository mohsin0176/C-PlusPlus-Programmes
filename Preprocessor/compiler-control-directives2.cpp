#include<iostream>
#include<conio.h>
using  namespace std;
#define INDIA 1
#define USA 1
#ifdef (defined INDIA)
#define PI 3.1416
#endif
#ifdef (defined USA)
#define PI 3.14
#endif
int main()
     {
         float r,a;
         cin>>r;
         a=PI*r*r;
         cout<<a;
         return 0;
     }

