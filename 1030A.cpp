#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,easy=0,hard=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1) hard++;
    }
    if(hard>0) cout<<"HARD"<<endl;
    else cout<<"EASY"<<endl;
}