#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,pair<ll,ll>>>v(n);
    ll tw=0,tp=0;
    for(ll i=0;i<n;i++){
      cin>>v[i].second.second>>v[i].second.first;
      tw+=v[i].second.second;
      v[i].first = v[i].second.first + v[i].second.second;
    }

    sort(v.rbegin(),v.rend());
    ll c=0;
    ll l=0;
    while(tp<tw){
      tp+=v[l].second.first;
      tw-=v[l].second.second;
      l++;
    }
    cout<<n-l<<endl;
  }
}