#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const ll n=100+10,c=100+10;
vector<bool>vis;
vector<ll>graph[n][c];

void dfs(ll u,ll c){
  vis[u]=true;
  for(auto v:graph[u][c]){
    if(!vis[v]){
      dfs(v,c);
    }
  }
}


int main(){
  ll n,m;
  cin>>n>>m;
  vis.resize(n+1);

  for(ll i=0;i<m;i++){
    ll u,v,c;
    cin>>u>>v>>c;
    graph[u][c].push_back(v);
    graph[v][c].push_back(u);
  }
  ll q;
  cin>>q;
  while(q--){
    ll u,v;
    cin>>u>>v;
    ll cnt=0;
    for(ll c=1;c<=100;c++){
      for(ll i=1;i<=n;i++) vis[i]=false;
      dfs(u,c);
      if(vis[v]) cnt++;
    }
    cout<<cnt<<endl;
  }
}