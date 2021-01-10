#include<iostream>
#include<conio.h>
const int MAX=5;
using namespace std;
class Distance
{
private:
    int feet;
    float inches;
public :
    void getDist()
    {
        cin>>feet>>inches;
    }
    void showDist() const
    {
        cout<<feet<<inches;
    }
};
int main()
{
    Distance d[MAX];
    for(int i=0;i<MAX;i++)
    {
        d[i].getDist();
    }
    for(int i=0;i<MAX;i++)
    {
        d[i].showDist();
    }
    return 0;
}
