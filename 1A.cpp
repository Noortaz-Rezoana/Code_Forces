#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,a,t1,t2,total;
    cin>>n>>m>>a;
    if(n%a==0) t1=(n/a);
    else t1=(n/a)+1;
    if(m%a==0) t2=(m/a);
    else t2=(m/a)+1;
    total=t1*t2;
    cout<<total<<endl;
}