#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    double per=0,ans,val;
    cin>>n;
    double a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            val=100/a[i];
            per=per+1/val;
        }
    }
    ans=(per/n)*100;
    cout<<fixed<<setprecision(8)<<ans<<endl;
}
