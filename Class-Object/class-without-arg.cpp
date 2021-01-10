#include<iostream>
#include<conio.h>
class testMax
{
private:
    int val_A,val_B;
public:
    void getValue()
    {
        cin>>val_A;
        cin>>val_B;
    }
    void checkMax()
    {
        if(val_A>val_B)
        {
            cout<<"A is max";
        }
        else
        {
            cout<<"B is max";
        }
    }
};
void main()
{
    testMax tm;
    tm.getValue();
    tm.checkMax();
}
