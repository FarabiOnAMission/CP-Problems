#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<ll>dist(2e5+5);
vector<ll>visited(2e5+5,false);
vector<vector<ll>>adj(2e5+5);

void bfs(ll x){
  queue<ll>bfs_q;
  bfs_q.push(x);
  dist[x]=0;
  visited[x]=true;

  while(!bfs_q.empty()){
    x=bfs_q.front();
    bfs_q.pop();

    for(auto v:adj[x]){
      if(!visited[v]){
        bfs_q.push(v);
        visited[v]=true;
        dist[v]=dist[x]+1;
      }
    }
  }
}

int main(){
  ll n,m,k;
  cin>>n>>m>>k;
  vector<ll>a(n+1),maxdist(k+1,0);
  for(ll i=1;i<=n;i++) cin>>a[i];
  adj.resize(n+1);
  dist.resize(n+1);
  while(m--){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  bfs(1);
  for(ll i=1;i<=n;i++){
    maxdist[a[i]]=max(dist[i],maxdist[a[i]]);
  }

  for(ll i=1;i<=k;i++)
    cout<<maxdist[i]<<' ';
}