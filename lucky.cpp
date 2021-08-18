#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum=0,i;
    int b[]={4,7,44,47,74,77,444,447,474,477,744,747,774,777};
    string a;
    cin>>a;
    for(i=0;i<=13;i++)
    {
        if(stoi(a)%b[i]==0)
        {
        sum++;
        }
    }
    if(sum==0)cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
   }
