#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll h,w;
const int MAX = 2005;
char path[MAX][MAX];
vector<pair<ll, ll>> warps[256];
bool used_warp[256];
bool vis[MAX][MAX];
vector<pair<ll,ll>>moves={{-1,0},{1,0},{0,1},{0,-1}};
ll arr[MAX][MAX];

bool isValid(ll x,ll y){
  if(x<0 || x>=h || y<0 || y>=w){
    return false;
  }
  if(path[x][y]=='#') return false;
  if(vis[x][y]) return false;
  return true;
}

void bfs(){
  queue<pair<ll,ll>>bfs_q;
  bfs_q.push({0,0});
  vis[0][0]=true;
  while(!bfs_q.empty())
  {
    ll cx=bfs_q.front().first;
    ll cy=bfs_q.front().second;
    bfs_q.pop();
    for(auto mv:moves){
      ll mvx = mv.first;
      ll mvy = mv.second;
      ll gox=cx+mvx,goy=cy+mvy;
      if(isValid(gox,goy)){
          arr[gox][goy]=arr[cx][cy]+1;
          vis[gox][goy]=true;
          bfs_q.push({gox,goy});
      }
    }

    char curr=path[cx][cy];
    if(curr>='a' && curr<='z'){

      if(!used_warp[curr]){
        used_warp[curr]=true;
        
        for(auto warp_dest : warps[curr]){
          ll wx = warp_dest.first;
          ll wy = warp_dest.second;
          if(!vis[wx][wy]){
          vis[wx][wy]=true;
          arr[wx][wy]=arr[cx][cy]+1;
          bfs_q.push({wx,wy});
        }
      }
      }
    }
  }
}

int main(){
  cin>>h>>w;
  for(ll i=0;i<h;i++){
    for(ll j=0;j<w;j++){
      cin>>path[i][j];
      if(path[i][j]>='a' && path[i][j]<='z'){
        warps[path[i][j]].push_back({i,j});
      }
    }
  }

  bfs();
  if(!vis[h-1][w-1]) cout<<-1<<endl;
  else{
    cout<<arr[h-1][w-1]<<endl;
  }

}