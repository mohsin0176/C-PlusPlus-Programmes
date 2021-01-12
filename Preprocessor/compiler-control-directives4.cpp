#include<iostream>
#include<conio.h>
#define VAL 40
#ifdef VAL
 #undef VAL
 #endif
 #define VAL 50
 int main()
 {
     cout<<VAL;
     return 0;
 }
