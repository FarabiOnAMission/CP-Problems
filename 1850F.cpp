#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll> cnt(n+1,0);
    for(ll i=0;i<n;i++){
      cin>>v[i];
      if(v[i]<=n) cnt[v[i]]++;
    }

    sort(v.begin(),v.end());
    vector<ll>pos(n+1,0);
    for(ll i=0;i<=n;i++){
      if(cnt[i]>0){
      for(ll j=i;j<=n;j+=i){
        pos[j]+=cnt[i];
      }
    }
    }

    ll ans=-1,curr=0;
    for(ll i=0;i<pos.size();i++){
      if(pos[i]>=curr){
        curr=pos[i];
        ans=i+1;
      }
    }

    cout<<curr<<endl;
  }
}