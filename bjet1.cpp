#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,num=1;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]==s[i+1])
        {
            num++;
            if(i+1==s.size())cout<<s[i]<<num;
        }
        else{
        cout<<s[i]<<num;
        num=1;
        continue;
        }
    }
}
