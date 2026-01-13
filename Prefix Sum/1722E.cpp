#include<bits/stdc++.h>

using namespace std;
using ll=long long;
ll arr[1002][1002];
ll p[1002][1002]{};
int main(){

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin>>t;
  while(t--){
    ll n,q;
    cin>>n>>q;
    memset(arr, 0, sizeof(arr));
    memset(p, 0, sizeof(p));
    for(ll i=1;i<=n;i++){
      ll h,x;
      cin>>h>>x;
      arr[h][x]+=(h*x);
    }
    
    for(ll i=1;i<=1000;i++){
      for(ll j=1;j<=1000;j++){
        p[i][j]+=(p[i-1][j]+p[i][j-1]-p[i-1][j-1]+arr[i][j]);
      }
    }

    while(q--){
      ll hs,ws,hb,wb;
      cin>>hs>>ws>>hb>>wb;
      ll ans=p[hs][ws]-p[hb-1][ws]-p[hs][wb-1]+p[hb-1][wb-1];
      cout<<ans<<endl;
    }
  }
}