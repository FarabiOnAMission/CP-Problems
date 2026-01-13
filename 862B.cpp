#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll cnt1=0,cnt2=0;
vector<vector<ll>>adj;
vector<bool>visited={false};


void dfs(ll u,ll c){
  visited[u]=true;
  if(c==1) cnt1++;
  else cnt2++;
  for(auto child: adj[u]){
    if(!visited[child])
      dfs(child,c^3);
  }
}

int main(){
  ll n;
  cin>>n;
  adj.resize(n+1);
  visited.resize(n+1);

  for(ll i=1;i<n;i++){
    ll x,y;
    cin>>x>>y;
    adj[x].push_back(y);
    adj[y].push_back(x);
  }

  dfs(1,1);

  ll ans=cnt1*cnt2-(n-1);
  cout<<ans<<endl;

}