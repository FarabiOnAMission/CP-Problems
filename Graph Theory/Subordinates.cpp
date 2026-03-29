#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj(2000005);
vector<ll>visited(2000005,false);
vector<ll>pref(2000006,0);

void dfs(ll x){
  visited[x]=true;
  for(auto child:adj[x]){
    if(!visited[child]){
      dfs(child);
      pref[x]+=(pref[child]+1);
    }
  }
}


int main(){
  ll n;
  cin>>n;
  visited.resize(n+1);
  for(ll i=2;i<=n;i++){
    //There was a bug because i initiated the loop from 1 instead of 2
    ll x;
    cin>>x;
    adj[x].push_back(i);
    adj[i].push_back(x);
  }

  dfs(1);
  for(ll i=1;i<=n;i++){
    cout<<pref[i]<<' ';
  }
}