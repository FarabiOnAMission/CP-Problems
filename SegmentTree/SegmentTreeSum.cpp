#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll N=1e5;
vector<ll>tree(4*N);


void build(vector<ll>a,ll v,ll tl,ll tr){
  if(tr-tl==1){
    if(tl<a.size())
        tree[v]=a[tl];
  }
  else{
    ll m=tl+(tr-tl)/2;
    build(a,v*2+1,tl,m);
    build(a,v*2+2,m,tr);
    tree[v]=tree[2*v+1] + tree[2*v+2];
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
  tree[x]=tree[2*x+1]+ tree[2*x + 2];
}

ll sum(ll l,ll r,ll x,ll lx,ll rx){
  if(l>=rx || lx>=r) return 0;
  if(lx>=l && rx<=r) return tree[x];
  ll m=lx+(rx-lx)/2;
  ll s1= sum(l,r,2*x+1,lx,m);
  ll s2= sum(l,r,2*x+2,m,rx);

  return s1+s2;
}


int main(){
  
}