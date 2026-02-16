#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("mowing.in", "r", stdin);
  freopen("mowing.out", "w", stdout);
  ll n;
  cin>>n;
  map<pair<ll,ll>,ll>moov;
  ll t=0,x=0,y=0,ans=LLONG_MAX;
  moov[{0,0}]=0;
  while(n--){
    char a;
    ll mv;
    cin>>a>>mv;
    for(ll i=1;i<=mv;i++){
      if(a=='N') y++;
      else if(a=='S') y--;
      else if(a=='E') x++;
      else x--;
      t++;
      if(moov.count({x,y})){
        ans=min(ans,t-moov[{x,y}]);
      }
      moov[{x,y}]=t;
    }
  }

  if(ans==LLONG_MAX) cout<<-1<<endl;
  else cout<<ans<<endl;
}