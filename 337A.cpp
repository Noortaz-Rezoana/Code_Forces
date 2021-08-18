#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,dif;
    cin>>n>>m;
    int a[m];
    for(i=0;i<m;i++)
    {
        cin>>a[i];
        cin>>a[i];
    }
    sort(a,a+m);
    dif= *max_element(a,a+n)-*min_element(a,a+n);
    cout<<dif<<endl;
}
