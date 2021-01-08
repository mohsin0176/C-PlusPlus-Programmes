#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    void srt(int[],int,int);
    int a[10],count=0,n;
    for(n=0;n<10;n++)
    {
        cout<<(n+1)<<"\t";
        cin>>a[n];
        count++;
    }
    n=0;
    srt(a,n,count-1);
    cout<<"After Sort:"<<"\n";
    for(n=0;n<10;n++)
    {
        cout<<(n+1)<<"\t"<<a[n]<<"\n";
    }
    return 0;

}

void srt(int k[20],int lb,int ub)
{
    int i,j,key,temp,flag=0;
    if(lb<ub)
    {
        i=lb;
        j=ub+1;
        key=k[i];
        while(flag !=1)
        {
            i++;
            while(k[i]<key)
            {
                i++;
            }
            j--;
            while(k[j]>key)
            {
                j--;
            }
            if(i<j)
            {
                temp=k[i];
                k[i]=k[j];
                k[j]=temp;
            }
            else
            {
                flag=1;
                temp=k[lb];
                k[lb]=k[j];
                k[j]=temp;
            }
        }
        srt(k,lb,j-1);
        srt(k,j+1,ub);
    }

}
