#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,q,k;
  cin>>n>>q>>k;
  vector<ll>a(n+1);
  for(ll i=1;i<=n;i++) cin>>a[i];
  while(q--){
    ll l,r;
    cin>>l>>r;
    ll x=k+a[r]-a[l];
    ll ans=x-2*(r-l)-1;

    cout<<ans<<endl;
  }
}