#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,A=0,d=0;
    cin>>n;
    string a;
    cin>>a;
    for(i=0;i<n;i++)
    {
        if(a[i]=='A')A++;
        else d++;
    }
    if(A>d)cout<<"Anton"<<endl;
    else if(A<d)cout<<"Danik"<<endl;
    else cout<<"Friendship"<<endl;
   }

