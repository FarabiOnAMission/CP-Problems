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

}