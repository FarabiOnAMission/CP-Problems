#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    vector<ll>prefsum(n+1,0);
    for(ll i=0;i<n;i++) cin>>v[i];

    sort(v.begin(),v.end());

    for(ll i=1;i<=n;i++){
      prefsum[i]=prefsum[i-1]+v[i-1];
    }

    ll ans=0;
    for(ll i=1;i<=n;i++){
      ll rem=(x-prefsum[i]);
      if(rem<0) break;
      ll paisi=rem/i;
      ll final=max(0LL,paisi+1);
      ans+=final;
    }

    cout<<ans<<endl;
  }
}