#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<vector<ll>>adj;
vector<ll>visited;
vector<ll>dista,distb;
ll dist=0;


void dfs(ll c,ll p,ll d,vector<ll> &dist){
  visited[c]=true;
  dist[c]=d;
  for(auto x:adj[c]){
    if(x==p) continue;

    if(!visited[x]){
      dfs(x,c,d+1,dist);
    }
  }
}

int main(){
  ll n,x;
  cin>>n>>x;
  adj.resize(n+1);
  visited.resize(n+1,false);
  dista.resize(n+1,0);
  distb.resize(n+1,0);

  for(ll i=1;i<n;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  dfs(1,-1,0,dista);
  fill(visited.begin(), visited.end(), false);
  dfs(x,-1,0,distb);

  ll mx=0;
  for(ll i=1;i<=n;i++){
    if(dista[i]>distb[i]){
      mx=max(mx,dista[i]);
    }
  }

  cout<<2*mx<<endl;
}