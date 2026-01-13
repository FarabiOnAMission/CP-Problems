#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll N=1e5;
vector<pair<ll,ll>>tree(4*N);

pair<ll,ll> merge(pair<ll,ll>a,pair<ll,ll>b){
  if(a.first<b.first)
    return a;
  else if(a.first>b.first)
    return b;
  
  return {a.first,a.second+b.second};
}

void build(vector<ll>&a,ll v,ll tl,ll tr){
  if(tr-tl==1){
    if(tl<a.size())
        tree[v]=make_pair(a[tl],1);
  }
  else{
    ll m=tl+(tr-tl)/2;
    build(a,v*2+1,tl,m);
    build(a,v*2+2,m,tr);
    tree[v]=merge(tree[2*v+1],tree[2*v+2]);
  }
}

pair<ll,ll> get_min(ll l,ll r,ll x,ll lx,ll rx){
  if(l>=rx || lx>=r) return make_pair(LLONG_MAX,0);
  if(lx>=l && rx<=r) return tree[x];
  ll m=lx+(rx-lx)/2;

  return merge(get_min(l,r,2*x+1,lx,m),get_min(l,r,2*x+2,m,rx));
}

void update(ll i,ll v,ll x,ll lx,ll rx){
  if(rx-lx == 1){
    tree[x]=make_pair(v,1);
    return;
  }

  ll m=lx+(rx-lx)/2;
  if(i<m){
    update(i,v,2*x+1,lx,m);
  }
  else{
    update(i,v,2*x+2,m,rx);
  }
  tree[x]=merge(tree[2*x+1],tree[2*x+2]);
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
      pair<ll,ll> p=get_min(l,r,0,0,n);
      cout<<p.first<<' '<<p.second<<endl;
    }
  }
}