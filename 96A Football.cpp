#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int ans1=0,ans2=0,i;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        /*if(a[i]==1)
        {*/
            if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6])
            ans1++;
        /*}
        if(a[i]==0)
        {
            if(a[i]==a[i+1] && a[i]==a[i+2] && a[i]==a[i+3] && a[i]==a[i+4] && a[i]==a[i+5] && a[i]==a[i+6] && a[i]==a[i+7])
            ans2++;
            cout<<ans2;
        }*/
    }
    if(ans1>0 || ans2>0)
    cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}