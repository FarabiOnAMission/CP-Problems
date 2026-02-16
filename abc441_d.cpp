#include<bits/stdc++.h>

using namespace std;
using ll=long long;

struct edge{
  ll to;
  ll cost;
};

vector<edge>adj[200005];
set<ll>ans;
ll n,m,s,t,l;
void dfs(ll u,ll len,ll cst){
  if(len==l){
    if(cst>=s && cst<=t){
    ans.insert(u);
    }
    return;
  }

  for(auto x:adj[u]){
    dfs(x.to,len+1,cst+x.cost);
  }
}

int main(){

  cin>>n>>m>>l>>s>>t;
  
  for(ll i=0;i<m;i++){
    ll x,go,tk;
    cin>>x>>go>>tk;
    adj[x].push_back({go,tk});
  }

  dfs(1,0,0);
  for(auto x:ans){
    cout<<x<<' ';
  }
}