#include<iostream>
using namespace std;
int main()
{
    int n,i,j,t;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               t=a[j];
               a[j]=a[j+1];
               a[j+1]=t;
            }
        }
    }
    for(i=0;i<n;i++)cout<<a[i]<<" ";
    return 0;
}
