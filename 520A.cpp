#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,nzero=0;
    int b[26]={0};
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
        if('a'<=a[i] && a[i]<='z')
        {
            b[a[i]-97]++;
        }
        else if('A'<=a[i] && a[i]<='Z')
        {
            b[a[i]-65]++;
        }
    }
    for(i=0;i<26;i++)
    {
        if(b[i]==0) nzero++;
    }
    if(nzero>0) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
}
