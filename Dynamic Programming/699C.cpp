#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n,h[105],dp[105][3];

ll solve(ll i,ll prev){
  if(i>n){
    return 0;
  }

  if(dp[i][prev]!=-1){
    return dp[i][prev];
  }

  ll ans=solve(i+1,0);

  if((h[i]==1 || h[i]==3)  && prev!=1){
    ans=max(ans,1+solve(i+1,1));
  }

  if((h[i]==2 || h[i]==3)  && prev!=2){
    ans=max(ans,1+solve(i+1,2));
  }
  
  return dp[i][prev]=ans;
  }

int main(){
  cin>>n;
  memset(dp,-1,sizeof dp);
  for(ll i=1;i<=n;i++) cin>>h[i];
  cout<<n-solve(1,0)<<endl;
}