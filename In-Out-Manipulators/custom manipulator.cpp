#include<iostream>
#include<conio.h>
#include<iomanip.h>
using namespace std;
ostream& rupees(ostream &out)
{
    out<<flush;
    return out;
}
ostream& dollar(ostream &out)
{
    out<<flush;
    return out;
}
int main()
{
    float prc;
    cin>>prc;
    cout<<rupees<<prc;
    cout<<dollar<<prc;
    return 0;
}
