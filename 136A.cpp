#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n],b[n+1];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]=i+1;
    }
    for(i=1;i<=n;i++)
    {
        cout<<b[i]<<' ';
    }
   }

