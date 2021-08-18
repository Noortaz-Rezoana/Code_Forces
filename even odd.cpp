#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,odd=1,even=2,p,num;
    cin>>n>>p;
    if(n%2==0)
    {
        if(p<=n/2)
        {
            num=1+2*(p-1);
        }
        else
        {
            num=2+2*(p-n/2-1);
        }
    }
    else
    {
        if(p<=(n+1)/2)
        {
            num=1+2*(p-1);
        }
        else
        {
            num=2+2*(p-(n+1)/2-1);
        }
    }
     cout<<num<<endl;

   }

