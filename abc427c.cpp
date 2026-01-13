#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;

  vector<vector<ll>>adj(n);
  for(ll i=0;i<m;i++){
    ll a,b;
    cin>>a>>b;
    adj[a].push_back(b);
  }
  
}