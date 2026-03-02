#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll clouds[2005][2005];
ll diff[2005][2005];
ll ones[2005][2005];
ll pref[2005][2005];

int main(){
  ll n;
  cin>>n;
  vector<pair<pair<ll,ll>,pair<ll,ll>>>v;
  for(ll i=0;i<n;i++){
    ll u,d,l,r;
    cin>>u>>d>>l>>r;
    v.push_back({{u,d},{l,r}});
    diff[u][l]++;
    diff[u][r+1]--;
    diff[d+1][l]--;
    diff[d+1][r+1]++;
  }

  for(ll i=1;i<=2000;i++){
    for(ll j=1;j<=2000;j++){
      clouds[i][j] = diff[i][j] + clouds[i-1][j] + clouds[i][j-1] - clouds[i-1][j-1];
    }
  }

  ll uncovered=0;
  for(ll i=1;i<=2000;i++){
    for(ll j=1;j<=2000;j++){
      if(clouds[i][j]==0) uncovered++;
    }
  }

  for(ll i=1;i<=2000;i++){
    for(ll j=1;j<=2000;j++){
      if(clouds[i][j]==1) ones[i][j]=1;
      pref[i][j] = ones[i][j]  + pref[i-1][j] + pref[i][j-1] - pref[i-1][j-1];
    }
  }

  for(ll i=0;i<n;i++){
    ll U= v[i].first.first;
    ll D= v[i].first.second;
    ll L= v[i].second.first;
    ll R= v[i].second.second;

    ll ans= pref[D][R] - pref[D][L-1] - pref[U-1][R] + pref[U-1][L-1];
    cout<<ans+uncovered<<endl;
  }

}