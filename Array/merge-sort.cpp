
#include<iostream>
#include<conio.h>
void merge(int *,int,int,int);
using namespace std;
void mergesort(int *a,int low,int high)
{
    int mid;
    if(low<high)
    {
        mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,high,mid);
    }
    return ;

}
void merge(int *a,int low,int high,int mid)
{
    int i,j,k,c[50];
    i=low;k=low;
    j=mid+1;
    while(i<=mid && j<=high)
    {
        if(a[i]<a[j])
        {
            c[k]=a[i];
            k++;
            i++;
        }
        else
        {
            c[k]=a[j];
            k++;
            j++;
        }
    }
    while(i<=mid)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    while(j<=high)
    {
        c[k]=a[i];
        k++;
        i++;
    }
    for(i=low;i<k;i++)
    {
        a[i]=c[i];
    }
}
int main()
{

    int a[20],i,b[20];
     cout<<"1"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>a[i];
    }
    mergesort(a,0,4);
    for(i=0;i<5;i++)
    {
        cout<<a[i];
    }
    cout<<"2"<<endl;
    for(i=0;i<5;i++)
    {
        cin>>b[i];
    }
    mergesort(b,0,4);
    for(i=0;i<5;i++)
    {
        cout<<b[i];
    }
    return 0;
}

