#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,sum=1,temp=1;
    cin>>n;

    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            if(temp<sum) temp=sum;
            sum=1;
            continue;
        }
        if(a[i+1]>=a[i]) sum++;
    }
    if(temp>sum)cout<<temp<<endl;
    else cout<<sum<<endl;
}
