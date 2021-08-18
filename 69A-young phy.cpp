#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,sum=0,count=0;
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=sum+a[j][i];
        }
        if(sum==0)
        {
            count++;
        }
    }
    if(count>2) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}