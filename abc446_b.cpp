#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  set<ll>s;
  for(ll i=0;i<n;i++){
    ll l;
    cin>>l;
    vector<ll>x(l);
    for(ll i=0;i<l;i++) cin>>x[i];
    
    ll ans=0;
    for(ll i=0;i<l;i++){
      if(!s.count(x[i])){
        ans=x[i];
        s.insert(x[i]);
        break;
      }
    }
    cout<<ans<<endl;
  }
}