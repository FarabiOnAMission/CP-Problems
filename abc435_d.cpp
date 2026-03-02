#include<bits/stdc++.h>

using namespace std;
using ll=long long;
vector<vector<ll>>adj;
vector<vector<ll>>reverse_adj;
vector<bool>visited;

void dfs(ll x){
  visited[x]=true;
  for(auto g: reverse_adj[x]){
    if(!visited[g]){
      dfs(g);
    }
  }
}


int main(){
  ll n,m;
  cin>>n>>m;
  adj.resize(n + 1);
  reverse_adj.resize(n + 1);
  visited.resize(n + 1, false);

  while(m--){
    ll x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    reverse_adj[y].push_back(x);
  }
  ll q;
  cin>>q;
  while(q--){
    ll x;
    cin>>x;
    ll v;
    if(x==1){
      cin>>v;
      if(!visited[v])
        dfs(v);
      }
    else{
      cin>>v;
      if(visited[v]) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }
}