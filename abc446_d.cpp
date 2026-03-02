#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll LIS(vector<ll>arr){
  ll n=arr.size();
  if(n==1) return 1;
  unordered_map<ll,ll>dp;
  ll ans=1;
  for(ll i=0;i<n;i++){
    if(dp.count(arr[i]-1)){
      dp[arr[i]]=1+dp[arr[i]-1];
    }
    else{
      dp[arr[i]]=1;
    }

    ans=max(ans,dp[arr[i]]);
  }
  return ans;
}


int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);

  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  
  cout<<LIS(v)<<endl;
}