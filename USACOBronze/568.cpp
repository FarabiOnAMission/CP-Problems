#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  freopen("speeding.in", "r", stdin);
  freopen("speeding.out", "w", stdout);
  ll n,m;
  cin>>n>>m;
  ll lim[100],bess[100];
  ll curr=0;
  for(ll i=0;i<n;i++){
    ll d,v;
    cin>>d>>v;
    for(ll j=curr;j<curr+d;j++){
      lim[j]=v;
    }
    curr+=d;
  }
  curr=0;

  for(ll i=0;i<m;i++){
    ll d,v;
    cin>>d>>v;
    for(ll j=curr;j<curr+d;j++){
      bess[j]=v;
    }
    curr+=d;
  }
  ll ans=0;
  for(ll i=0;i<100;i++){
    ans=max(ans,bess[i]-lim[i]);
  }

  cout<<ans<<endl;
}