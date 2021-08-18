#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,sum,total=0,arr;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ///sum=((n+1)*(n+2))/2;
    for(i=0;i<n;i++)
    {
        total=total+a[i];
    }
    arr=a[n-1];
    sum=arr*(arr+1)/2;
    cout<<sum-total;


}
