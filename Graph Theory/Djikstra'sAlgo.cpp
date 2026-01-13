#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const int INF=10000000000000;

vector<vector<pair<ll,ll>>>adj;
vector<ll>dist;
vector<ll>p;
vector<ll>visited;
void djikstra(ll s){
  ll n=adj.size();
  dist.assign(n,INF);
  p.assign(n,-1);
  visited.assign(n,false);

  dist[s]=0;

  for(ll i=0;i<n;i++){
    ll v=-1;
    for(ll j=0;j<n;j++){
      if(!visited[j] && (v==-1 || dist[j]<dist[v]))
        v=j;
    }

    if(dist[v]==INF)
      break;

    visited[v]=true;

    for(auto edge: adj[v]){
      ll to=edge.first;
      ll len=edge.second;

      if(dist[v] + len<dist[to]){
        dist[to]=dist[v]+len;
        p[to]=v;
      }

    }
  }
}


int main(){

}