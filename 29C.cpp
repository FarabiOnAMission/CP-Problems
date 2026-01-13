#include<bits/stdc++.h>

using namespace std;
using ll=long long;

unordered_map<ll,vector<ll>>adj;
unordered_map<ll,bool>visited;
vector<ll>path;

void dfs(ll x){
  visited[x]=true;
  path.push_back(x);

  for(auto trck: adj[x]){
    if(!visited[trck]){
      dfs(trck);
    }
  }
}

int main(){
  ll n;
  cin>>n;
  for(ll i=0;i<n;i++){
    ll x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  ll strt=-1;

  for(auto [idx,sz] : adj){
    if(sz.size()==1){
      strt=idx;
    }
  }

  dfs(strt);

  for(ll i=0;i<path.size();i++) cout<<path[i]<<' ';

  cout<<endl;

}