#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,room=0;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(int j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i][0]!=a[i][1] && a[i][1]-a[i][0]>1) room++;
    }
    cout<<room<<endl;
}