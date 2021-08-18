#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,num,j,sum;
    cin>>n;
    cin>>num;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            sum = a[i]+a[j];
            if(sum==num) cout<<a[i]<<" "<<a[j]<<endl;
        }
    }
}
