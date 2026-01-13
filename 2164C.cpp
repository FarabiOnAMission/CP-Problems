#include<bits/stdc++.h>

using namespace std;
using ll=long long;

auto cmp = [](const auto& a, const auto& b) {
    if (a.first != b.first) return a.first < b.first;
    return a.second > b.second;
};

int main(){
  ios::sync_with_stdio(0);
  cin.tie(nullptr);

  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>a(n),b(m),c(m);
    multiset<ll>swords;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      swords.insert(a[i]);
    }
    for(ll i=0;i<m;i++) cin>>b[i];
    for(ll i=0;i<m;i++) cin>>c[i];

    vector<pair<ll,ll>>gain,nogain,loss;
    for(ll i=0;i<m;i++){
      if(b[i]<c[i]){
        gain.push_back({b[i],c[i]});
      }
      else if(0<c[i] && c[i]<=b[i]){
        nogain.push_back({b[i],c[i]});
      }
      else{
        loss.push_back({b[i],0});
      }
    }

    sort(gain.begin(), gain.end(), cmp);
    sort(nogain.begin(), nogain.end(), cmp);
    sort(loss.begin(), loss.end(), cmp);

    ll cnt=0;
    for(ll i=0;i<gain.size();i++){
      ll dmg=gain[i].first;
      ll bonus=gain[i].second;

      auto it = swords.lower_bound(dmg);
      if(it!=swords.end()){
        ll mx=max(*it,bonus);
        swords.erase(it);
        swords.insert(mx);
        cnt++;
      }
    }

    for(ll i=0;i<nogain.size();i++){
      ll dmg=nogain[i].first;
      ll bonus=nogain[i].second;

      auto it = swords.lower_bound(dmg);
      if(it!=swords.end()){
        cnt++;
      }
    }

    for(ll i=0;i<loss.size();i++){
      ll dmg=loss[i].first;
      ll bonus=loss[i].second;

      auto it = swords.lower_bound(dmg);
      if(it!=swords.end()){
        swords.erase(it);
        cnt++;
      }
    }

    cout<<cnt<<endl;

  }
}