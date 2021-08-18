#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,s,i,j;
    char temp;
    cin>>n>>s;
    string a;
    cin>>a;
        for(j=0;j<n && s>0;j++)
        {
            if(a[j]=='B' && a[j+1]=='G')
            {
                temp=a[j];
                a[j]=a[j+1];;
                a[j+1]=temp;
                s--;
            }
        }
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
}