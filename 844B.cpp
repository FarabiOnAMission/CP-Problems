#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  ll arr[n][m];

  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      cin>>arr[i][j];
    }
  }
  ll ans=0;
  //rows
  for(ll i=0;i<n;i++){
    ll w=0,b=0;
    for(ll j=0;j<m;j++){
      if(arr[i][j]==0) w++;
      else b++;
    }
    ans+=(1LL<<w)-1;
    ans+=(1LL<<b)-1;
  }

  // col
  for(ll j=0;j<m;j++){
    ll w=0,b=0;
    for(ll i=0;i<n;i++){
      if(arr[i][j]==0) w++;
      else b++;
    }
    ans+=(1LL<<w)-1;
    ans+=(1LL<<b)-1;
  }

  ans-=n*m;
  cout<<ans<<endl;
}