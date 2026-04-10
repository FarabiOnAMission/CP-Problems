#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<vector<ll>>v(n);
    set<ll>s_all;

    for(ll i=0;i<n;i++){
      ll k;
      cin>>k;
      for(ll j=0;j<k;j++){
        ll c;
        cin>>c;
        v[i].push_back(c);
        s_all.insert(c);
      }
    }
    set<ll>final_set;
    ll ans=0;
    for(auto it:s_all){
      ll elem= it;
      for(ll i=0;i<n;i++){
        if(count(v[i].begin(),v[i].end(),elem)<=0){
          for(ll j=0;j<v[i].size();j++){
            final_set.insert(v[i][j]);
          }
        }
      }
      ll cnt=final_set.size();
      ans=max(ans,cnt);
      final_set.clear();
    }

    cout<<ans<<endl;
  }
}