#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(ll i=1;i<=n;i++){
      ll a,b,c;
      cin>>a>>b>>c;
      v.push_back({a,i});
      v.push_back({b,i});
      v.push_back({c,i});
    }

    sort(v.begin(),v.end());
    ll l=0;
    ll ans=LLONG_MAX;
    map<ll,ll>freq;
    ll cnt=0;
    for(ll r=0;r<3*n;r++){
      freq[v[r].second]++;
      if(freq[v[r].second]==1) cnt++;
      while(cnt==n){
        ans=min(ans,v[r].first-v[l].first);
        freq[v[l].second]--;
        if(freq[v[l].second]==0){
          cnt--;
        }
        l++;
      }
    }

    cout<<ans<<endl;
  }
}