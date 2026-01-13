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
    set<ll>s;
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      s.insert(v[i]);
      s.insert(v[i]+1);
      mp[v[i]]++;
    }

    ll res=0,last=0;
    for(auto x:s){
      ll c=mp[x];
      res+=max(0LL,c-last);
      last=c;
    }

    cout<<res<<endl;
  }
}