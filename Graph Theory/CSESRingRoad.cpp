#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n,m,sv,ev;
vector<vector<ll>>adj;
vector<bool>visited;
vector<ll>parent;
vector<ll>ans;

bool dfs(ll node,ll p){
  visited[node]=true;
  parent[node]=p;

  for(auto x:adj[node]){
    if(x==p) continue;

    if(visited[x]){
      sv=x;
      ev=node;
      return true;
    }
    if(!visited[x]){
      if(dfs(x,node))
        return true;
    }
  }
  return false;
}

bool visitall(){
  for(ll i=1;i<=n;i++){
    if(!visited[i])
      if(dfs(i,-1)) return true;
  }
  return false;
}

int main(){
  cin>>n>>m;
  adj.resize(n+1);
  visited.resize(n+1,false);
  parent.resize(n+1);

  for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  if(!visitall()){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
  }

    ans.push_back(sv);
    ll x=ev;
    while(x!=sv){
    ans.push_back(x);
    x=parent[x];
  }

  ans.push_back(sv);


  cout<<ans.size()<<endl;
  for(ll i=0;i<ans.size();i++) cout<<ans[i]<<' ';

  cout<<endl;

}