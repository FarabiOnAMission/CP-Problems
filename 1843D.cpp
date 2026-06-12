#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj;
vector<bool>visited;
vector<ll>cnt;

void leaf_mark_dfs(ll u){
  visited[u]=true;
  for(auto x:adj[u]){
    if(!visited[x]){
      if(adj[x].size()==1) cnt[x]=1;
      leaf_mark_dfs(x);
    }
  }
}

void leaf_cnt_dfs(ll u){
  visited[u]=true;
  for(auto x:adj[u]){
    if(!visited[x]){
      leaf_cnt_dfs(x);
      cnt[u]+=cnt[x];
    }
  }
}

int main(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
ll t;
cin>>t;
while(t--){
  ll n;
  cin>>n;
  cnt.resize(n+1,0);
  adj.resize(n+1);
  visited.resize(n+1,false);
  for(ll i=1;i<n;i++){
    ll u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  for(ll i=1;i<=n;i++) cnt[i]=0;
  leaf_mark_dfs(1);
  for(ll i=1;i<=n;i++) visited[i]=false;
  leaf_cnt_dfs(1);
  ll q;
  cin>>q;
  while(q--){
    ll x,y;
    cin>>x>>y;
    cout<<cnt[x]*cnt[y]<<'\n';
  }
  adj.clear();
  cnt.clear();
  visited.clear();
}
}

/*
At first we will store the indices of the leaf nodes.
Then for each assumption we will check if one of them is the leaf node, 
if yes then ans will be 1 x no. of leaf nodes
if both of them is leaf nodes then ans will be 1

if none of them leaf node, then I will run dfs from both x & y to see, how many leaf nodes each one of them has as a child
the ans will be leaf_node_cnt_1 * leaf_node_cnt_2


Simplifying it, no if else needed, just for each vertice multiply them leaf_node_vertice_1 * leaf_node_vertice_2
*/
