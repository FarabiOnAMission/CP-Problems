#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  ll arr[n];
  ll x,a,b,c;
  cin>>x>>a>>b>>c;
  arr[0]=x;
  for(ll i=1;i<n;i++){
    ll num = (a*(arr[i-1])+b)%c;
    arr[i]=num;
  }
  ll curr_xor=0;
  for(ll i=0;i<k;i++){
    curr_xor^=arr[i];
  }
  ll ans=curr_xor;
  for(ll i=k;i<n;i++){
    curr_xor^=arr[i-k];
    curr_xor^=arr[i];
    ans^=curr_xor;
  }

  cout<<ans<<endl;
}