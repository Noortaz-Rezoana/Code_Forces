#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,sum=0;
    int sign=1;
    cin>>n;
    long long a[n];
    for(i=1;i<=n;i++)
    {
        sign=sign*-1;
        sum=sum+(sign*i);
    }
    cout<<sum<<endl;
}