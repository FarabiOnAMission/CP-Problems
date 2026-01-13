#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll a,b,k;
  cin>>a>>b>>k;
  vector<ll>boys(k),girls(k);
  map<ll,ll>u,v;
  for(ll i=0;i<k;i++){
    cin>>boys[i];
  }
  for(ll i=0;i<k;i++){
    cin>>girls[i];
  }
  for(ll i=0;i<k;i++){
    u[boys[i]]++;
    v[girls[i]]++;
}
    ll ans=0;
  for(ll i=0;i<k;i++){
    ans+=(k-u[boys[i]]-v[girls[i]]+1);
  }

  cout<<ans/2<<endl;
  }
}
