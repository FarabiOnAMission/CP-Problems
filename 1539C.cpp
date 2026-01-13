#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k,x;
  cin>>n>>k>>x;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];

  sort(v.begin(),v.end());
  vector<ll>store;
  for(ll i=1;i<n;i++){
    ll diff=v[i]-v[i-1];
    if(diff>x){
    ll coverup=(diff-1)/x;
    store.push_back(coverup);
  }
}
  ll ans=1;
  sort(store.begin(),store.end());
  for(ll i=0;i<store.size();i++){
    if(k>=store[i])
      k-=store[i];
    else ans++; 
  }

  cout<<ans<<endl;
}