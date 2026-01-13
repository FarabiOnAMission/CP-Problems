#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n;

vector<ll>recurse(vector<ll>&curr,ll k){
  if(k==n || curr.empty()){
    return curr;
  }

  vector<ll>one,zero;
  for(ll g:curr){
    if(g & 1<<k){
      one.push_back(g);
    }
    else{
      zero.push_back(g);
    }
  }

  vector<ll> res=recurse(one,k+1);

  sort(zero.begin(),zero.end());
  res.insert(res.end(),zero.begin(),zero.end());

  return res;
}


int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    cin>>n;
    ll x=1LL<<n ;
    vector<ll>v(x);
    iota(v.begin(),v.end(),0);

    vector<ll>ans=recurse(v,0);
    for(ll i=0;i<x;i++){
      cout<<ans[i]<<' ';
    }
    cout<<endl;
  }
}