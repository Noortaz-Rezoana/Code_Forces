#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    string b;
    cin>>a;
    cin>>b;
    int i,j=b.size();
    for(i=0;i<a.size() && b.size()>0;i++ )
    {
        if(a[i]==b[j-1]) 
        {
            j--;
            b.pop_back();
        }
    }
    if(b.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}