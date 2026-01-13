#include<bits/stdc++.h>

using namespace std;
using ll=long long;

ll n,m;
vector<vector<bool>>visited;
vector<vector<pair<ll,ll>>>path;
vector<pair<ll,ll>>moves={{-1,0},{1,0},{0,-1},{0,1}};
ll strtx,strty,endx,endy;

bool isValid(ll x,ll y){
  if(x<0 || x>=n || y<0 || y>=m){
    return false;
  }
  if(visited[x][y]) return false;
  
  return true;

}

void bfs(){
  queue<pair<ll,ll>>q;
  q.push({strtx,strty});
  visited[strtx][strty]=true;

  while(!q.empty()){
    ll cx=q.front().first;
    ll cy=q.front().second;
    q.pop();

    for(auto mv:moves){
      ll mvx=mv.first;
      ll mvy=mv.second;
      if(isValid(cx+mvx,cy+mvy)){
        q.push({cx+mvx,cy+mvy});
        visited[cx+mvx][cy+mvy]=true;
        path[cx+mvx][cy+mvy]={mvx,mvy};

      }
    }
  }
}


int main(){
  cin>>n>>m;
  visited.resize(n);
  path.resize(n);
  for(ll i=0;i<n;i++){
    visited[i].resize(m);
    path[i].resize(m);
  }
  for(ll i=0;i<n;i++){
    for(ll j=0;j<m;j++){
      char c;
      cin>>c;
      if(c=='#'){
        visited[i][j]=true;
      }
      else if(c=='A'){
        strtx=i;
        strty=j;
      }
      else if(c=='B'){
        endx=i;
        endy=j;
      }
    }
  }

  bfs();

  if(!visited[endx][endy]){
    cout<<"NO"<<endl;
    return 0;
  }

  cout<<"YES"<<endl;
  vector<pair<ll,ll>>ans;

  pair<ll,ll>end={endx,endy};

  while(end.first!=strtx || end.second!=strty){
    ans.push_back(path[end.first][end.second]);
    end.first-=ans.back().first;
    end.second-=ans.back().second;
  }
  
  reverse(ans.begin(),ans.end());
  cout<<ans.size()<<endl;

  for(auto c:ans){
    if(c.first==1 && c.second==0){
      cout<<"D";
    }
    else if(c.first==-1 && c.second==0){
      cout<<"U";
    }
    else if(c.first==0 && c.second==1){
      cout<<"R";
    }
    else
      cout<<"L";
  }


}