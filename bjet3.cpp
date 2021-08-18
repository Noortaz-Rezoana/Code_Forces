#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,p;
    vector<int> v;
    while(cin>>n){
    v.push_back(n);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    p=v.size();
    int arr[p];
    for(int i=0;i<p;i++){
     arr[i]=v[i];
     cout<<arr[i]<<' ';
     }


}
