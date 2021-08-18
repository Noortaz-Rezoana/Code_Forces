#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,low=0,up=0;
    string a;
    cin>>a;
    if(islower(a[0]))
    {
        for(i=1;i<a.size();i++)
        {
           if(islower(a[i])) low++;
           else up++;
        }
        if(up>0 && low>0) cout<<a<<endl;
        else if(low==a.size()-1 && a.size()>1)cout<<a<<endl;
        else
        {
            for(i=0;i<a.size();i++)
            {
                if(i==0) putchar(toupper(a[i]));
                else putchar(tolower(a[i]));
            }
        }
    }
    else
    {
        for(i=0;i<a.size();i++)
        {
           if(isupper(a[i])) up++;
        }
        if(up==a.size())
        {
            for(i=0;i<a.size();i++)
            {
               putchar(tolower(a[i]));
            }
        }
        else cout<<a<<endl;
    }
}
