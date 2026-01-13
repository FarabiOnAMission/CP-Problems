#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m,c;
  cin>>n>>m>>c;
  map<ll,ll>mp;
  vector<ll>a(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
    mp[a[i]]++;
  }
  
  vector<ll>pos;
  vector<ll>cnt;
  for(auto [x,f]:mp){
    pos.push_back(x);
    cnt.push_back(f);
  }
  ll sz=cnt.size();
  vector<ll>prefsum(2*sz+1,0);
  for(ll i=1; i<=2*sz;i++){
  prefsum[i] = prefsum[i-1] + cnt[(i-1) % sz];
  }

ll ans=0;
for(ll j=0;j<sz;j++){
ll target =c+prefsum[j+1];
auto it = lower_bound(prefsum.begin()+(j+1),prefsum.end(), target);

  ll k= it-prefsum.begin();
  ll X_j=prefsum[k]-prefsum[j+1];

  ll len=(pos[(j+1)%sz]-pos[j]+m)%m;

  if(len==0) len=m;

  ans+=X_j*len;
}
cout<<ans<<endl;
}