#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<bool>used(n+1,false);
    v[n-1]=1;
    used[1]=true;
    for(ll i=n-2;i>=0;i--){
      ll diff=i+1;
      if(v[i+1]+diff<=n && !used[v[i+1] + diff]){
        v[i]=v[i+1]+diff;
        used[v[i]]=true;
      }
      else{
        v[i]=v[i+1]-diff;
        used[v[i]]=true;
      }
    }

    for(auto x:v){
      cout<<x<<" ";
    }
    cout<<endl;
  }
}