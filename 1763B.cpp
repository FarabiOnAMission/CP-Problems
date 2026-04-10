#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>h(n),p(n);
    vector<pair<ll,ll>>hp(n);
    vector<ll>suff_min(n);
    ll idx=0,total_damage=0;
    for(ll i=0;i<n;i++){
      cin>>hp[i].first;
      hp[i].second=p[i];
    }
    for(ll i=0;i<n;i++){
      cin>>hp[i].second;
    }

    sort(hp.begin(),hp.end(), [](const auto& a, const auto& b) {
        if (a.first != b.first) {
            return a.first < b.first; 
        }
        return a.second > b.second;
    });

    suff_min[n-1]=hp[n-1].second;
    for(ll i=n-2;i>=0;i--){
      suff_min[i]=min(suff_min[i+1],hp[i].second);
    }
    ll d=0;
    while(k>0){
      d+=k;
      while(idx<n &&  d>=hp[idx].first){
        idx++;
      }
      if(idx==n) break;
      k-=suff_min[idx];
    }

    if(idx==n) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}