#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ant=0,da=0,i;
    cin>>n;
    string a;
    cin>>a;
    
    for(i=0;i<n;i++)
    {
        if(a[i]=='A') ant++;
        else da++; 
    }
    if(ant==da) cout<<"Friendship"<<endl;
    else if(ant>da) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;
}