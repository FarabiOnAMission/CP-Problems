#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,a,b,c;
  cin>>n>>a>>b>>c;
  vector<ll>dp(n+1,-1);
  dp[0]=0;
  for(ll i=1;i<=n;i++){
    if(i>=a){
      if(dp[i-a]!=-1){
        dp[i]=max(dp[i],dp[i-a]+1);
      }
    }
    if(i>=b){
      if(dp[i-b]!=-1){
        dp[i]=max(dp[i],dp[i-b]+1);
      }
    }

    if(i>=c){
      if(dp[i-c]!=-1){
        dp[i]=max(dp[i],dp[i-c]+1);
      }
    }
    }

    cout<<dp[n]<<endl;
}