#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int n,i,sum=0,j;
    cin>>n;
    string a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
            if(a[i][1]=='+') sum++;
            else sum--;
    }
    cout<<sum<<endl;
}

