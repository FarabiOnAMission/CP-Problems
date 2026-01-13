#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll N=2e5+20;
ll ans=0,curr;
vector<ll>a(N);
map<ll,ll>dp;
vector<ll>idx;

int main(){
  ll n;
  cin>>n;
  for(ll i=0;i<n;i++){
    cin>>a[i];
    dp[a[i]]=max(dp[a[i]],dp[a[i]-1]+1);
    if(dp[a[i]]>ans){
      ans=dp[a[i]];
      curr=a[i];
    }
  }

  cout<<ans<<endl;
  for(ll i=n-1;i>=0;i--){
    if(a[i]==curr){
      curr--;
      idx.push_back(i+1);
    }
  }
reverse(idx.begin(),idx.end());
for(ll i=0;i<idx.size();i++){
  cout<<idx[i]<<' ';
}
cout<<endl;
}