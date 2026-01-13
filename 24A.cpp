#include<bits/stdc++.h>

using namespace std;
using ll=long long;

vector<vector<pair<ll,ll>>>adj(2e5+5);
vector<bool>visited(2e5 + 5,false);


ll dfs(ll curr, ll parent, ll n,ll &tot){
    ll cnt = 0;
    for(auto traverse:adj[curr]){

      if(cnt==n-1){
        if(traverse.first==1){
        tot+=traverse.second;
        break;
        }
        else continue;
      }

      if(traverse.first==parent || visited[traverse.first]) continue;
      
      cnt++;
      tot+=traverse.second;
      visited[traverse.first]=true;
      dfs(traverse.first,curr,n,tot);

    }

    return tot;
}



int main(){
  ll n;
  cin>>n;
  ll totalcost=0;
  for(ll i=0;i<n;i++){
    ll a,b,c;
    cin>>a>>b>>c;
    adj[a].push_back({b,0});
    adj[b].push_back({a,c});
  }

  ll total=0;

  ll total1=dfs(1,adj[1][1].first,n,total);

  for(ll i=1;i<=n;i++){
    visited[i]=false;
  }
  total=0;
  ll total2=dfs(1,adj[1][0].first,n,total);

  cout<<min(total1,total2)<<endl;

}

