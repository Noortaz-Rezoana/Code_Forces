#include<bits/stdc++.h>
using namespace std;
int main()
{
   string s1="I hate";
   string s2="I love";
   int n,i=1;
   cin>>n;
   while(i<=n)
   {
   if(i%2!=0)
   cout<<s1;
   else
   cout<<s2;
   i++;
   if(i<=n)cout<<" that ";
   else cout<<" it ";
   }
}
