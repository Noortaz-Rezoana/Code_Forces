#include<bits/stdc++.h>
using namespace std;
int main()
{
    int s=0,i,n,j,m=0,p;
    cin>>n;
    int a[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    s=a[0][1];
    m=s;
    for(i=1;i<n-1;i++)
    {
        for(j=0;j<1;j++)
        {
            p=s-a[i][0]+a[i][1];
            s=p;
            if(m<s)
              {
                m=s;
              }
            }
        }
    cout<<m<<endl;
   }
