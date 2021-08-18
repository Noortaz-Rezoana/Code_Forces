#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cin>>a;
    int f=0;
    int x=stoi(a)+1;
    for(int i=0;i<1000;i++)
    {
        f=0;
    string str=to_string(x);
     for(int j=0;j<3;j++)
     {
         for(int k=j+1;k<4;k++)
         {
             if(str[j]==str[k]) f++;
         }
     }
    if(f>0)
    {
        x=stoi(str)+1;
    }
    else{
        cout<<str<<endl;
        break;}
    }
}