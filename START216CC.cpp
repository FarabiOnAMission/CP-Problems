#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    vector<ll>dp(n,1);
    for(ll i=0;i<n;i++){
      for(ll j=0;j<i;j++){
        if((v[i] & v[j])==v[j]){
          dp[i]=max(dp[i],dp[j]+1);
        }
      }
    }

    ll ans= *max_element(dp.begin(),dp.end());
    cout<<ans<<endl;
  }
}