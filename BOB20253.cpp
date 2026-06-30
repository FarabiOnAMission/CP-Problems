#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    map<ll,ll>kabya,ninad;
    ll n;
    cin>>n;
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      kabya[x]++;
    }
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      ninad[x]++;
    }

    ll a=-1,b=-1;
    for(auto it:kabya){
      ll x=it.first;
      ll y=it.second;
      if(y%2==1){
        a=x;
        break;
      }
    }

    for(auto it:ninad){
      ll x=it.first;
      ll y=it.second;
      if(y%2==1){
        b=x;
        break;
      }
    }
    ll x=0,y=0;
    for(ll i=0;i<31;i++){
      if((a & 1LL<<i) && (b & 1LL<<i)){
        x++;
      }
      else if((a & 1LL<<i) || (b & 1LL<<i)){
        y++;
      }
    }
    ll total = x+y;
    ll ans=0;
    for(ll i=1;i<=x+y;i++){
      ans|=(1LL<<i);
    }
    cout<<ans<<endl;
  }
}