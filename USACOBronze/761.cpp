/*
PAAAAAATTTTWAAAAARRRRYYYYY 
FAN CLUB
*/

#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("measurement.in", "r", stdin);
  freopen("measurement.out", "w", stdout);
  ll n;
  cin>>n;
  vector<pair<pair<ll,string>,ll>>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i].first.first>>v[i].first.second>>v[i].second;
  }
  sort(v.begin(), v.end(), [](const auto& a, const auto& b){
    return a.first.first < b.first.first;
  });

  map<string,ll>freq;
  freq["Bessie"] = 7;
  freq["Elsie"] = 7;
  freq["Mildred"] = 7;
  bool was_b = true, was_e = true, was_m = true;
  ll ans=0;
  for(ll i=0;i<n;i++){
    string x=v[i].first.second;
    ll mv=v[i].second;
    freq[x]+=mv;
    ll max_freq = -1;
    for (auto p : freq) {
        if(p.second > max_freq) {
            max_freq = p.second;
        }
    }
    bool is_b = (freq["Bessie"] == max_freq);
    bool is_e = (freq["Elsie"] == max_freq);
    bool is_m = (freq["Mildred"] == max_freq);

    if(is_b != was_b || is_e != was_e || is_m != was_m){
        ans++;
        was_b = is_b;
        was_e = is_e;
        was_m = is_m;
    }
  }

  cout<<ans<<endl;
}