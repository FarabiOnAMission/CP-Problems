#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n,k;
vector<vector<ll>>adj(202020);
vector<bool>visited(202020,false);
vector<ll>bridges;
ll cc=0;

void dfs(ll x){
  visited[x]=true;

  for(auto u:adj[x]){
    if(!visited[u])
      dfs(u);
  }
}

ll ConnectedComponents(){
  for(ll i=1;i<=n;i++){
    if(!visited[i]){
      cc++;
      bridges.push_back(i);
      dfs(i);
    }
  }
}

int main(){
  cin>>n>>k;

  for(ll i=0;i<k;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  ConnectedComponents();

  cout<<cc-1<<endl;
  for(ll i=0;i<bridges.size()-1;i++){
    cout<<bridges[i]<<' '<<bridges[i+1]<<endl;
  }
}