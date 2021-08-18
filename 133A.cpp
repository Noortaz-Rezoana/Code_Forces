#include<bits/stdc++.h>
using namespace std;
int main()
{
    int found=0;
    string a;
    cin>>a;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='H' || a[i]=='Q'|| a[i]=='9')
        found++;
    }
    if(found>0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}