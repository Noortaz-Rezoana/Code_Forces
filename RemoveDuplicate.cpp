#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k = *max_element(a,a+n);
    int b[k+1]={0};
    for(i=0;i<n;i++)
    {
        if(b[a[i]]==0){
        cout<<a[i]<<" ";
        b[a[i]]++;
        }
    }
}
