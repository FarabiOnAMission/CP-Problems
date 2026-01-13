#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>v(n);
  vector<pair<ll,ll>>q(m);
  vector<ll>val(m);
  for(ll i=0;i<n;i++) cin>>v[i];
  for(ll i=0;i<m;i++){
    cin>>q[i].first>>q[i].second>>val[i];
  }
  vector<ll>ops(m+2,0);
  for(ll i=0;i<k;i++){
    ll x,y;
    cin>>x>>y;
    ops[x]++;
    ops[y+1]--;
  }

  for(ll i=1;i<=m;i++)
    ops[i]+=ops[i-1];

  vector<ll>diffarray(n+2,0);

  for(ll i=1;i<=m;i++){
    diffarray[q[i-1].first]+=ops[i]*val[i-1];
    diffarray[q[i-1].second+1]-=ops[i]*val[i-1];
  }

  for(ll i=1;i<=n;i++){
    diffarray[i]+=diffarray[i-1];
    v[i-1]+=diffarray[i];
  }

  for(ll i=0;i<n;i++)
    cout<<v[i]<<' ';
  
  cout<<endl;

}