#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j=4;
    string a;
    cin>>a;
    string  m="olleh";
    for(i=0;i<a.size() && m.size()>0;i++ )
    {
        if(a[i]==m[j]) 
        {
            j--;
            m.pop_back();
        }
    }
    if(m.size()==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}