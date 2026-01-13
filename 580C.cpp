#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<ll>>adj(1e5+5);
vector<ll>cnt(1e5+5);
vector<bool>visited(1e5 + 5,false);
ll ans=0;

void dfs(ll node,ll parent,ll catcount,ll m){

  if(cnt[node]==1) catcount++;
  else catcount=0;

  if(catcount>m) return;

  bool isLeaf=true;

  for(auto child:adj[node]){
    if(child!= parent){
      isLeaf=false;
      dfs(child,node,catcount,m);
    }
  }

  if(isLeaf) ans++;
}


int main(){
  ll n,m;
  cin>>n>>m;
  for(ll i=1;i<=n;i++){
    cin>>cnt[i];
  }

  ll a,b;
  while(cin>>a>>b){
    adj[a].push_back(b);
    adj[b].push_back(a);
    }

    dfs(1,0,0,m);

    cout<<ans<<endl;

}