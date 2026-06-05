#include<bits/stdc++.h>

using namespace std;
using ll=long long;

char grid[55][55];
ll n;
vector<pair<ll,ll>>coord1,coord2;

void dfs(char grid[55][55],ll i,ll j,char old_color,char new_color,vector<pair<ll,ll>>&coord){
  if(i<0 || i>=n || j<0 || j>=n || grid[i][j]!=old_color) return;
  else{
    grid[i][j]=new_color;
    dfs(grid,i+1,j,old_color,new_color,coord);
    dfs(grid,i-1,j,old_color,new_color,coord);
    dfs(grid,i,j+1,old_color,new_color,coord);
    dfs(grid,i,j-1,old_color,new_color,coord);
  }
  coord.push_back({i,j});
}

int main(){
  cin>>n;
  ll r1,c1,r2,c2;
  cin>>r1>>c1>>r2>>c2;
  
  for(ll i=0;i<n;i++){
    for(ll j=0;j<n;j++){
      cin>>grid[i][j];
    }
  }
  dfs(grid,r1-1,c1-1,'0','2',coord1);
  pair<ll,ll> p = {r2-1,c2-1};
  if(find(coord1.begin(),coord1.end(),p)!=coord1.end()){
    cout<<0<<endl;
  }
  else{
    dfs(grid,r2-1,c2-1,'0','2',coord2);
    ll min_cost=LLONG_MAX;
    for(auto x:coord1){
      for(auto y:coord2){
        ll rs = x.first;
        ll cs = x.second;
        ll rt = y.first;
        ll ct = y.second;
        
        ll cost = (rs-rt)*(rs-rt) + (cs-ct)*(cs-ct);
        min_cost = min(cost,min_cost);
      }
    }
    cout<<min_cost<<endl;
  }
}