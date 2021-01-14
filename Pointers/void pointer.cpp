#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i;
    float f;
    int *ip;
    float *fp;
    void *vp;
    ip=&i;
    fp=&f;
    vp=&i;
    vp=&f;
    cout<<ip<<endl;
    cout<<fp<<endl;
    cout<<vp<<endl;

    return 0;
}
