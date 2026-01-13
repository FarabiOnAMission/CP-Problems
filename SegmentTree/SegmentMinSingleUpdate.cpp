#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll N=1e5+5;
vector<ll>tree(4*N);


void build(vector<ll>&a,ll v,ll tl,ll tr){
  if(tr-tl==1){
    if(tl<a.size())
        tree[v]=a[tl];
  }
  else{
    ll m=tl+(tr-tl)/2;
    build(a,v*2+1,tl,m);
    build(a,v*2+2,m,tr);
    tree[v]=min(tree[2*v+1],tree[2*v+2]);
  }
}

void update(ll i,ll v,ll x,ll lx,ll rx){
  if(rx-lx == 1){
    tree[x]=v;
    return;
  }

  ll m=lx+(rx-lx)/2;
  if(i<m){
    update(i,v,2*x+1,lx,m);
  }
  else{
    update(i,v,2*x+2,m,rx);
  }
  tree[x]=min(tree[2*x+1],tree[2*x + 2]);
}

ll sum(ll l,ll r,ll x,ll lx,ll rx){
  if(l>=rx || lx>=r) return INFINITY;
  if(lx>=l && rx<=r) return tree[x];
  ll m=lx+(rx-lx)/2;
  ll s1= sum(l,r,2*x+1,lx,m);
  ll s2= sum(l,r,2*x+2,m,rx);

  return min(s1,s2);
}


int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  build(v,0,0,n);
  while(m--){
    ll q;
    cin>>q;
    if(q==1){
      ll i,v;
      cin>>i>>v;
      update(i,v,0,0,n);
    }
    else{
      ll l,r;
      cin>>l>>r;
      cout<<sum(l,r,0,0,n)<<endl;
    }
  }
}