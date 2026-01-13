#include<bits/stdc++.h>

using namespace std;
using ll=long long;
vector<pair<ll,ll>>moves={{-1,0},{1,0},{0,1},{0,-1},{1,1},{1,-1},{-1,1},{-1,-1}};

set<pair<ll,ll>>allowed;
map<pair<ll,ll>,ll>dist;
set<pair<ll,ll>>visited;



void bfs(ll x,ll y){

queue<pair<ll,ll>>q;
q.push({x,y});
visited.insert({x,y});
dist[{x,y}]=0;

while(!q.empty()){
  auto [x,y] = q.front();
  q.pop();

  for(auto [dx,dy]:moves){
    ll nx= x+dx;
    ll ny=y+dy;
    if(allowed.count({nx,ny}) && !visited.count({nx,ny})){
      visited.insert({nx,ny});
      q.push({nx,ny});
      dist[{nx,ny}]=dist[{x,y}]+1;
    }
  }
}
}

int main(){

ios::sync_with_stdio(false);
cin.tie(nullptr);
ll x1,y1,x2,y2;
cin>>x1>>y1>>x2>>y2;
ll n;
cin>>n;

for(ll i=0;i<n;i++){
  ll r,a,b;
  cin>>r>>a>>b;
  for(ll i=a;i<=b;i++){
    allowed.insert({r,i});
  }
}

bfs(x1,y1);

if(dist.count({x2,y2})){
  cout<<dist[{x2,y2}]<<endl;
}
else cout<<-1<<endl;

}