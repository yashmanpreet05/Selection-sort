#include<iostream>
using namespace std;
int main()
{
    int a[10],n,temp,loc,j,i,min;
    cout<<"enter the size of array :";
    cin>>n;
    cout<<"enter the array elements :";
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<(n-1);i++)
    {
        min =a[i];
        loc = i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                loc = j;
            }
        }
        temp = a[i];
        a[i]=a[loc];
        a[loc]=temp;
    }
    cout<<"array after selection sort:";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\n";
    }
    return 0;
}