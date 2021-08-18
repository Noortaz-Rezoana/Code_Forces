#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,i,ans=0;
    cin>>a>>b;
    for(i=0;i<7;i++)
    {
        if(a<=b)
        {
        a=a*3;
        b=b*2;
        ans++;
        }
    }
    cout<<ans<<endl;
}