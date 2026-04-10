#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  ll n;
  cin>>n;
  vector<pair<pair<ll,ll>,ll>>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i].first.first>>v[i].first.second>>v[i].second;
  }
  ll ans=0;
  for(ll i=1;i<=n;i++){
    ll cnt=0;
    ll prev_pos=i;
    ll curr_pos=i;
    for(ll j=0;j<n;j++){
      if(v[j].first.first==curr_pos){
        curr_pos=v[j].first.second;
      }
      else if(v[j].first.second==curr_pos){
        curr_pos=v[j].first.first;
      }

      if(curr_pos==v[j].second){
        cnt++;
      }
    }
    ans=max(ans,cnt);
  }

  cout<<ans<<endl;
}