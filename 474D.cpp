#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll k;
const ll mod=1e9+7;
ll dp[100013+7];

ll recurse(ll n){
  if(n<k) return 1;
  if(n<0) return 0;
  if(dp[n]!=-1) return dp[n];
  return dp[n]= (recurse(n-1) + recurse(n-k))%mod;
}

int main(){
  ll t;
  cin>>t>>k;
  memset(dp,-1,sizeof dp);
  ll prefsum[100013+7];
  prefsum[0]=recurse(0);
  for(ll i=1;i<=100013;i++){
    prefsum[i]=prefsum[i-1]+recurse(i);
  }

  while(t--){
    ll a,b;
    cin>>a>>b;
    ll sum= (prefsum[b]-prefsum[a-1])%mod;
    cout<<sum<<endl;
  }
}