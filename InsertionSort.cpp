#include<iostream>
using namespace std;

int main()
{
    int i,j,n,key;
    int a[30];

    cout<<"--------------------INSERTION SORT------------------\n\n";
    cout<<"enter the size of the array\n";
    cin>>n;
    cout<<"\n enter elemnts in array";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(j=2;j<n;j++)
    {
        key=a[j];
        i=j-1;

        while(i>0 && a[i]>key)
        {
            a[i+1]=a[i];
            i=i-1;
            a[i+1]=key;

        }

    }
    for(i=0;i<n;i++)
    {
        cout<<"\n sorted list"<<a[i];
    }
}
