#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj(2e5+5);
vector<ll>visited(2e5+5);
ll n;

void dfs(ll x){
visited[x]=true;
for(auto v:adj[x]){
  if(!visited[x]){
    dfs(x);
  }
}
}

ll connected_components(){
  ll cc=0;
  for(ll u=1;u<=n;u++){
    if(!visited[u]){
      dfs(u);
      cc++;
    }
  }
}


int main(){

}