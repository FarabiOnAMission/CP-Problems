#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const ll mod= 998244353;
vector<vector<ll>>adj;
vector<bool>visited;
vector<ll>colors;
vector<ll>cnt(3);
ll ans=1;

ll powMod(ll x, ll n) {

    int res = 1;

    for(ll i=1;i<= n;i++) {
        res = (res*x)%mod;
    }
    return res;
}

void dfs(ll x,ll color){
  colors[x]=color;
  cnt[color]++;
  for(auto u:adj[x]){
  if(colors[u]==0){
    dfs(u,3-color);
  }
  if(colors[u]==colors[x]){
    ans=0;
  }
  }
}

int main(){

  ll t;
  cin>>t;
  while(t--){
  ll n,m;
  cin>>n>>m;
  adj.assign(n+1, {});
  colors.assign(n+1, 0);
  visited.assign(n+1, false);
  ans = 1;

  for(ll i=0;i<m;i++){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
    visited[u]=true;
    visited[v]=true;
  }
  for(ll i=1;i<=n;i++){
    colors[i]=0;
  }

  for(ll i=1;i<=n;i++){
    if(colors[i]==0){
      cnt[1]=0,cnt[2]=0;

      dfs(i,1);

      ll x= powMod(2,cnt[1])+powMod(2,cnt[2]);
      ans=(ans*x)%mod;
    }
  }

  cout<<ans<<endl;
}
}