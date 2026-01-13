#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj;
vector<ll>visited;
void dfs(ll x){

  visited[x]=true;
  for(auto cc: adj[x]){
    if(!visited[cc])
      dfs(cc);
  }
}


int main(){
  ll n,m;
  cin>>n>>m;
  visited.resize(n+1,false);
  adj.resize(n+1);
  for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  ll c=0;
  
  for(ll i=1;i<=n;i++){
    if(!visited[i]){
      c++;
      dfs(i);
    }
  }

  cout<<(1LL<<(n-c))<<endl;
}