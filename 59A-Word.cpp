#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int low=0,up=0,i;
    cin>>a;
    for(i=0;i<a.size();i++)
    {
         if(a[i]>='A' && a[i]<='Z') up++;
         else low++;
    }
    for(i=0;i<a.size();i++)
    {
        if(up>low) cout<<(char)toupper(a[i]);
        else cout<<(char)tolower(a[i]);
    }
}