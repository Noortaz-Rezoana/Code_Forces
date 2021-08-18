#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    string s[n];
    map<string,int> m;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
        m[s[i]]++;

        if(m[s[i]]==1) cout<<"OK"<<endl;
        else cout<<s[i]<<m[s[i]]-1<<endl;
    }
}
