#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);

    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];

    map<ll,ll>mpa;
    map<ll,ll>mpb;

    ll l = 0;
    for (ll r = 0; r < n; r++) {
    if (r+1 == n || a[r] != a[r+1]) {
        mpa[a[l]] = max(mpa[a[l]], r - l + 1); 
        l = r + 1;
    }
  }

l=0;
for (ll r = 0; r < n; r++) {
    if (r+1 == n || b[r] != b[r+1]) {
        mpb[b[l]] = max(mpb[b[l]], r - l + 1); 
        l = r + 1;
    }
}

ll ans=0;
for(auto &p:mpa){

  ll v=p.first;
  ans=max(ans,p.second+ mpb[v]);
}

for(auto &p:mpb){

  ll v=p.first;
  ans=max(ans,p.second+ mpa[v]);
}

cout<<ans<<endl;



}
}