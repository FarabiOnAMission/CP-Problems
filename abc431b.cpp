#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll x;
  cin>>x;
  ll n;
  cin>>n;
  map<ll,ll>type;
  for(ll i=1;i<=n;i++){
    ll w;
    cin>>w;
    type[i]=w;
  }
  ll q;
  cin>>q;
  set<ll>s;
  ll ans=x;
  while(q--){
    ll p;
    cin>>p;
    if(!s.count(p)){
      ans+=type[p];
      s.insert(p);
    }
    else{
      ans-=type[p];
      s.erase(p);
    }
    cout<<ans<<endl;
  }
}