#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj;
vector<bool>visited;
vector<ll>colors;


bool dfs(ll x,ll color){
  colors[x]=color;
  for(auto u:adj[x]){
    if(colors[u]==0){
    if(!dfs(u,3-color))
      return false;
    }
      if(colors[u]==colors[x])
        return false;
  }
  return true;
}

int main(){
  ll n,m;
  cin>>n>>m;
  visited.resize(n+1);
  colors.resize(n+1);
  adj.resize(n+1);
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
  ll strt=-1;

  for(ll i=1;i<=n;i++){
    if(visited[i] && colors[i]==0){
      if(!dfs(i,1))
      {
        cout<<-1<<endl;
        return 0;
      }
    }
  }
  vector<ll>arya,pari;
  for(ll i=1;i<=n;i++){
    if(colors[i]==1){
      arya.push_back(i);
    }
    else if(colors[i]==2){
      pari.push_back(i);
    }
  }

  cout<<arya.size()<<endl;
  for(ll x:arya){
    cout<<x<<' ';
  }
  cout<<endl;
  cout<<pari.size()<<endl;
  for(ll x:pari){
    cout<<x<<' ';
  }
  cout<<endl;
}