#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y,k;
    cin>>x>>y>>k;
    ll l=1,r=1e12;
    ll ans=-1;
    while(l<=r){
      ll m=l+(r-l)/2;
      ll curr=m;
      for(ll i=1;i<=x;i++){
        curr-=curr/y;
      }
      if(curr>=k){
        ans=m;
        r=m-1;
      }
      else l=m+1;
    }

    cout<<ans<<endl;
  }
}