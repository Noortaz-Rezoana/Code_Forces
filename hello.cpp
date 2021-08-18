#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,sum,sign=-1;
    cin>>n;
    if(n%2==0)
    sum=n/2;
    else
    sum=sign*(n+1)/2;
    cout<<sum<<endl;
}
