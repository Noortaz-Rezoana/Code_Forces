#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,b[10000]={0};
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=1;i<10000;i++)
    {
        if(b[i]>1) cout<<i<<endl;
    }
}
