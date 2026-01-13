#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool compareBySecond(const std::pair<ll, ll>& a, const std::pair<ll, ll>& b) {
    return a.second < b.second;
}

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>store;
    map<ll,ll>idx;
    for(ll i=1;i<=m;i++){
      ll x,w;
      cin>>x>>w;
      store.push_back({x,w});
      idx[x]=i;
    }

    sort(store.begin(),store.end(),compareBySecond);
    vector<pair<ll,ll>>store2;
    for(ll i=0;i<2*n;i++){
      ll x=store[i].first;
      ll w=store[i].second;
      store2.push_back({x,w});
    }

    sort(store2.begin(),store2.end());

    ll sum=0;
    vector<pair<ll,ll>>ans;
    for(ll i=0;i<n;i++){
      ll l=idx[store2[i].first];
      ll r=idx[store2[2*n-i-1].first];
      ans.push_back({l,r});
      sum+=store2[i].second;
      sum+=store2[2*n-i-1].second;
    }

    cout<<sum<<endl;
    for(auto x:ans){
      cout<<x.first<<" "<<x.second<<endl;;
    }

    cout<<endl;
  }
    
}