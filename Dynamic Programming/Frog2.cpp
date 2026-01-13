#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll h[100005],dp[100005];
ll n,k;
ll solve(ll i){
  ll cost=LLONG_MAX;
  if(i==n)
    return 0;
  if(dp[i]!=-1) return dp[i];
  for(ll j=1;j<=k;j++){
    if(i+j<=n){
      cost=min(cost,abs(h[i]-h[i+j])+solve(i+j));
    }
  }
  return dp[i]=cost;

}
int main(){
  cin>>n>>k;
  for(ll i=1;i<=n;i++) cin>>h[i];
  memset(dp,-1,sizeof dp);
  solve(1);
  cout<<dp[1]<<endl;
}

