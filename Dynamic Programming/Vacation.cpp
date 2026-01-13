#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n;
ll a[100005],b[100005],c[100005];
ll dp[100005][3];

//0--->a, 1--->b, 2--->c

ll solve(ll i,ll prev){
  ll ans=0;
  if(i>n){
    return 0;
  }
  if(dp[i][prev]!=-1)
    return dp[i][prev];
  
  if(prev==0){
    ll op1=b[i]+solve(i+1,1);
    ll op2=c[i]+solve(i+1,2);
    ans=max(op1,op2);

  }
  else if(prev==1){
    ll op1=a[i]+solve(i+1,0);
    ll op2=c[i]+solve(i+1,2);
    ans=max(op1,op2);
  }
  else{
    ll op1=a[i]+solve(i+1,0);
    ll op2=b[i]+solve(i+1,1);
    ans=max(op1,op2);
  }
  return dp[i][prev]=ans;
}

int main(){
  cin>>n;
  memset(dp,-1,sizeof dp);
  for(ll i=1;i<=n;i++){
    cin>>a[i]>>b[i]>>c[i];
  }

  ll bonus1=a[1]+solve(2,0);
  ll bonus2=b[1]+solve(2,1);
  ll bonus3=c[1]+solve(2,2);

  cout<<max({bonus1,bonus2,bonus3})<<endl;
}