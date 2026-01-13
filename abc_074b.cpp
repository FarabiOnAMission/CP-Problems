#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll n,k;
  cin>>n>>k;
  ll ans=0;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    ll m=min(abs(x),abs(k-x));
    ans+=m*2;
  }

  cout<<ans<<endl;

}