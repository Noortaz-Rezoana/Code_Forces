#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,solve=0;
    cin>>n;
    int a[n][3];
    for(i=0;i<n;i++)
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    for(i=0;i<n;i++)
    {
        int count=0;
        for(j=0;j<3;j++)
        {
            
            if(a[i][j]==1) count++;
        }
        if(count>1)
        solve++;
    }
    cout<<solve<<endl;
}