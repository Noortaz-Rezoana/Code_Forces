#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string a,b;
    cin>>a;
    cin>>b;
    int c[a.size()];
    for(i=0;i<a.size();i++)
    {
        if(a[i]==b[i]) c[i]=0;
        else c[i]=1;
    }
    for(i=0;i<a.size();i++)
    {
        cout<<c[i];
    }
}
