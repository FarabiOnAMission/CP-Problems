#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n;
vector<vector<ll>>adj(2e5 + 5);
vector<ll> sub;

void dfs(ll x){
  sub[x]=1;

  for(auto u:adj[x]){

    dfs(u);
    sub[x]+=sub[u];
  }
}


int main(){
  cin>>n;
  sub.resize(n+1);
  for(ll i=2;i<=n;i++){
    ll x;
    cin>>x;
    adj[x].push_back(i);
  }

  dfs(1);
  for(ll i=1;i<=n;i++){

    if(i==n) cout<<sub[i]-1;
    
    else
      cout<<sub[i]-1<<' ';
  }

  cout<<endl;
}