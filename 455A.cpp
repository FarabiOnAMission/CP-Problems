#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  vector<ll>a(1e5+5),b(1e5+5),dp(1e5+5);
  ll n;
  cin>>n;
  for(ll i=1;i<=n;i++){
    cin>>a[i];
    b[a[i]]++;
  }

  dp[1]=b[1];
  for(ll i=2;i<=1e5;i++){
    dp[i]=max(dp[i-1],b[i]*i+dp[i-2]);
  }

  cout<<dp[1e5]<<endl;
}