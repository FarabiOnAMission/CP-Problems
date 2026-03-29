#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj(2000005);
vector<ll>visited(2000005,false);
vector<ll>bridge;

void dfs(ll x){
  visited[x]=true;
  for(auto a:adj[x]){
    if(!visited[a]){
      dfs(a);
    }
  }
}

int main(){
  ll n,m;
  cin>>n>>m;
  visited.resize(n);
  for(ll i=0;i<m;i++){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  for(ll i=1;i<=n;i++){
    if(!visited[i]){
      dfs(i);
      bridge.push_back(i);
    }
  }

  cout<<bridge.size()-1<<endl;
  for(ll i=0;i<bridge.size()-1;i++){
    cout<<bridge[i]<<' '<<bridge[i+1]<<endl;
  }
}