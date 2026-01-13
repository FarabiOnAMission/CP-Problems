#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll n;
vector<vector<ll>>adj;
vector<bool>visited;
vector<ll>ans;

void dfs(ll x){
  visited[x]=true;

  for(ll u :adj[x]){
    if(!visited[u])
      dfs(u);
  }

  ans.push_back(x);
}

void topological_sort(){
  visited.assign(n,false);
  ans.clear();
  for(ll i=0;i<n;i++){
    if(!visited[i])
      dfs(i);
  }

  reverse(ans.begin(),ans.end());
}

int main(){

}