#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,p,j,k;
    char temp;
    cin>>n>>p;
    string a;
    cin>>a;
    for(i=0;i<p;i++)
    {
        int b[50]={0};
        for(j=0;j<n;j++)
        {
            if(a[j]!='B')
            {
                b[j]=-1;
            }
        }
        for(k=0;k<n;k++)
        {
            if(b[k]==0 && a[k]=='B' && a[k+1]=='G')
            {
                swap(a[k],a[k+1]);
            }
        }
    }
    cout<<a<<endl;
}

