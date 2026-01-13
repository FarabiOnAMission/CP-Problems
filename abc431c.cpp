#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>h(n),b(m);
  multiset<ll>body;
  for(ll i=0;i<n;i++){
    cin>>h[i];
  }
  for(ll i=0;i<m;i++){
    cin>>b[i];
    body.insert(b[i]);
  }

  sort(h.begin(),h.end());
  ll ans=0;
  for(ll i=0;i<n;i++){
    ll x=h[i];
    auto it=body.lower_bound(x);
    // auto it=lower_bound(body.begin(),body.end(),x); body is a multiset
    if(it!=body.end()){
      body.erase(it);
      ans++;
    }
  }
  
  if(ans>=k) cout<<"Yes"<<endl;
  else cout<<"No"<<endl;
}