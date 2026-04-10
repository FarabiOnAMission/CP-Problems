#include<bits/stdc++.h>

using namespace std;
using ll=long long;



int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>adj(n+5);
    ll mid,centr;
    while(m--){
      ll u,v;
      cin>>u>>v;
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    //shob vertice er moddhe jeta leaf oita ber kore, leaf er sathe jeita connected oita hoilo mid ta jar maddhome y ber kora jabe
    set<ll>mids;
    for(ll i=0;i<adj.size();i++){
      if(adj[i].size()==1){
        mid=adj[i][0];
        mids.insert(mid);
      }
    }
    // y hobe mid er sathe jei koita connected oita -1 karon center er ekta extra edge ase
    ll y=adj[mid].size()-1;
    
    for(ll i=0;i<adj[mid].size();i++){
      if(!mids.count(adj[mid][i]) && adj[adj[mid][i]].size()!=1){
        centr=adj[mid][i];
      }
    }
    ll x=adj[centr].size();
    cout<<x<<' '<<y<<endl;
  }
}