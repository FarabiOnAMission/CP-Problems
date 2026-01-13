#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll dp[505][65000];
ll s,n;
const ll mod=1e9+7;
ll solve(ll i,ll sum){
  if(i==n){
    if(sum==s){
      return 1;
    }
    else{
      return 0;
    }
  }

  if(sum>s) return 0;

  if(dp[i][sum]!=-1) return dp[i][sum];

  return dp[i][sum]=(solve(i+1,sum+i) + solve(i+1,sum))%mod;

}

int main(){
  cin>>n;
  s=(n*(n+1))/2;
  if(s%2==1){
    cout<<0<<endl;
    return 0;
  }
  s/=2;
  memset(dp,-1,sizeof dp);
  cout<<solve(1,0)<<endl;
}