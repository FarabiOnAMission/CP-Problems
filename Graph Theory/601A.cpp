#include<bits/stdc++.h>

using namespace std;
using ll=long long;
vector<ll>visited(420,false);

void bfs(ll x,vector<ll>&dist,vector<vector<ll>>&adj){
  queue<ll>bfs_q;
  bfs_q.push(x);
  dist[x]=0;
  visited[x]=true;
  while(!bfs_q.empty()){
    x=bfs_q.front();
    bfs_q.pop();

    for(ll u:adj[x]){
      if(!visited[u]){
        bfs_q.push(u);
        visited[u]=true;
        dist[u]=dist[x]+1;
      }
    }
  }
}


int main(){
  ll n,m;
  vector<ll>distg(420,1e18),distcg(420,1e18);
  vector<vector<ll>>adjg(420),adjcg(420);
  cin>>n>>m;
  set<pair<ll,ll>>s;
  for(ll i=0;i<m;i++){
    ll u,v;
    cin>>u>>v;
    s.insert({u,v});
    s.insert({v,u});
    adjg[u].push_back(v);
    adjg[v].push_back(u);
  }

  for(ll u=1;u<=n;u++){
    for(ll v=1;v<=n;v++){
      if(!s.count({u,v}) && u!=v){
        adjcg[u].push_back(v);
      }
    }
  }

  bool rail=s.count({1,n});
  if(rail)
  {
    bfs(1,distcg,adjcg);
    if(distcg[n]>=1e18) cout<<-1<<endl;
    else cout<<distcg[n]<<endl;
  }
  else{
    bfs(1,distg,adjg);
    if(distg[n]>=1e18) cout<<-1<<endl;
    else cout<<distg[n]<<endl;
  }

}