#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll ans=0;
    for(ll j=30;j>=0;j--){
      ll cost=0;
      for(ll i=0;i<n;i++){
        if((v[i]&(1<<j))==0){
          cost++;
        }
      }

      if(cost<=k){
        ans|=(1<<j);
        k-=cost;
      }
    }
    cout<<ans<<endl;
  }
}