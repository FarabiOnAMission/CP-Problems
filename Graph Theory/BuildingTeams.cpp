#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n,m;
vector<vector<ll>>adj;
vector<ll>color;
vector<bool>visited;

bool dfs(ll u,ll c,ll par){
  visited[u]=true;
  color[u]=c;

  for(auto x:adj[u]){
    if(x==par) continue;

    if(!visited[x]){
    if(!dfs(x,(color[u]^3),u)){
      return false;
    }
  }
    if(color[u]==color[x])
      return false;
  }

  return true;
}

bool color_all(){

  for(ll i=1;i<=n;i++){
    if(!visited[i]){
      if(!dfs(i,1,-1))
        return false;
    }
  }

  return true;
}

int main(){
  cin>>n>>m;
  adj.resize(n+1);
  color.resize(n+1,0);
  visited.resize(n+1,false);

  for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }

  if(!color_all()){
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
  }

  for(ll i=1;i<=n;i++) cout<<color[i]<<' ';

  cout<<endl;

}