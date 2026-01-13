#include<bits/stdc++.h>

using namespace std;
using ll=long long;
vector<vector<ll>>adj;
vector<ll>par;
vector<bool>visited;

void bfs(){
  queue<ll>bfs_q;
  bfs_q.push(1);
  visited[1]=true;
  
  while(!bfs_q.empty()){
    ll u=bfs_q.front();
    bfs_q.pop();
    for(auto ne: adj[u]){
      if(!visited[ne]){
      visited[ne]=true;
      par[ne]=u;
      bfs_q.push(ne);
      }
    }
  }
}


int main(){
  ll n,m;
  cin>>n>>m;
  adj.resize(n+1);
  par.resize(n+1);
  visited.resize(n+1);

  fill(par.begin(),par.end(),-1);

  for(ll i=1;i<=m;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  bfs();

  if(par[n]==-1){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
  }

  stack<ll>stk;
  ll cand=n;

  while(cand!=-1){
    stk.push(cand);
    cand=par[cand];
  }

  cout<<stk.size()<<endl;
  while(!stk.empty()){
    cout<<stk.top()<<' ';
    stk.pop();
  }

}