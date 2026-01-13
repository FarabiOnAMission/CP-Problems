#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<pair<ll,ll>>>adj(2e5+5);
vector<bool>visited(2e5+5,false);

ll dfs(ll node){
  visited[node]=true;
  ll mxcost=0;
  for(auto[nxt,tk]:adj[node]){
    if(!visited[nxt]){
      ll childcost= tk + dfs(nxt);
      mxcost=max(childcost,mxcost);
    }
  }

  return mxcost;
}

int main(){
  ll n;
  cin>>n;
  for(ll i=1;i<n;i++){
    ll a,b,c;
    cin>>a>>b>>c;
    adj[a].push_back({b,c});
    adj[b].push_back({a,c});
  }

  ll ans =dfs(0);
  cout<<ans<<endl;
}