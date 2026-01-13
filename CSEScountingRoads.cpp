#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<pair<ll,ll>>moves={{-1,0},{1,0},{0,1},{0,-1}};
ll n,m,rooms=0;
vector<vector<bool>>visited;

bool isValid(ll x,ll y){
  if(x<0 || x>=n || y<0 || y>=m) return false;
  if(visited[x][y]) return false;

  return true;
}

void dfs(ll x,ll y){
  visited[x][y]=true;

  for(auto p:moves){
    if(isValid(x+p.first,y+p.second)){
      dfs(x+p.first,y+p.second);
    }
  }
}


void ConnectedComponent(){
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      if(!visited[i][j]){
        dfs(i,j);
        rooms++;
      }
    }
  }
}


int main(){
  cin>>n>>m;
  visited.resize(n);
  char arr[n][m];

  for(ll i=0;i<n;i++){
    visited[i].resize(m);
  }

  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      cin>>arr[i][j];

      if(arr[i][j]=='#')
        visited[i][j]=true;
    }
  }

  ConnectedComponent();
  cout<<rooms<<endl;
}