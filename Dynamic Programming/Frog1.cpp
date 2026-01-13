#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll h[100000+5],dp[100000+5];
ll n;
ll cost=0;
ll solve(ll i){
  if(i>=n){
    return 0;
  }

  if(dp[i]!=-1){
    return dp[i];
  }
  ll cost1=(abs(h[i]-h[i+1])+solve(i+1));

  if(i+2<=n){
    cost1=min(cost1,abs(h[i]-h[i+2])+solve(i+2));
  }
  cost=cost1;
  return dp[i]=cost;
}


int main(){ 
  cin>>n;
  for(ll i=1;i<=n;i++) cin>>h[i];

  memset(dp,-1,sizeof dp);
  solve(1);

  cout<<dp[1]<<endl;
}