#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,yes=0,p,q;
    cin>>n;
    cin>>p;
    int x[p],b[n]={0};
    for(i=0;i<p;i++)
    {
        cin>>x[i];
    }
    cin>>q;
    int y[q];
    for(i=0;i<q;i++)
    {
        cin>>y[i];
    }
    for(i=0;i<p;i++)
    {
        b[x[i]-1]++;
    }
    for(i=0;i<q;i++)
    {
        b[y[i]-1]++;
    }
    for(i=0;i<n;i++)
    {
        if(b[i]>0) yes++;
    }
    if(yes==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
