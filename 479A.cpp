#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,r[5],ma,i;
    cin>>a>>b>>c;
    r[0]=a+b+c;
    r[1]=a*b*c;
    r[2]=a+b*c;
    r[3]=a*(b+c);
    r[4]=(a+b)*c;
    cout<<*max_element(r,r+5)<<endl;
}
