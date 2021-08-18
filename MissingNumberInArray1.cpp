#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int a[n],b[n+1]={0};
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=1;i<=n;i++)
    {
        if(b[i]==0) cout<<i<<endl;
    }

}
