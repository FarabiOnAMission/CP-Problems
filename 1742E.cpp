#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n);
    vector<ll>prefmax(n+1,0);
    vector<ll>prefsum(n+1,0);
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    for(ll i=1;i<=n;i++){
      prefmax[i]=max(prefmax[i-1],v[i-1]);
      prefsum[i]=prefsum[i-1]+v[i-1];
    }

    while(q--){
      ll x;
      cin>>x;
      auto it=upper_bound(prefmax.begin(),prefmax.end(),x);
      ll idx=it- prefmax.begin();
      cout<<prefsum[idx-1]<<' ';
    }
    cout<<endl;
  }
}