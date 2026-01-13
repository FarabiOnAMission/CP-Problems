#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    ll ans=0;
    for(ll i=0;i<n;i++){
      ll x=0;
      for(ll j=0;j<m;j++){
        ll k;
        cin>>k;
        x+=k;
        ans+=x;
        v[i]+=k;
      }
    }

    sort(v.rbegin(),v.rend());
    ll x=0;
    for(ll i=0;i<n;i++){
      ans+=x*m;
      x+=v[i];
    }

    cout<<ans<<endl;
}
}