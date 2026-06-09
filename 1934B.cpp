#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  vector<ll>v={1,3,6,10,15};
  ll t;
  cin>>t;
  vector<ll>dp(31,1e9);
  dp[0]=0;
  for(ll i=1;i<=30;i++){
    for(ll j=0;j<v.size();j++){
      if(i>=v[j]){
        dp[i]=min(dp[i],dp[i-v[j]]+1);
      }
    }
  }
  while(t--){
    ll n;
    cin>>n;
    if(n<=30){
      cout<<dp[n]<<endl;
      continue;
    }
    ll opA = (n/15) + dp[n%15];
    ll opB = (n/15) - 1 + dp[n%15 + 15];
    cout<<min(opA,opB)<<endl;
  }
}