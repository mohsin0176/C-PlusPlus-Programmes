
#include<iostream>
#include<conio.h>
#define INDIA 1
#define USA 1
#if (defined INDIA)
#define PI 3.1416
#endif
#if (defined USA)
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
