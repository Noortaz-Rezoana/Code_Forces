#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,ans=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        ans++;
    }
    cout<<ans<<endl;

}