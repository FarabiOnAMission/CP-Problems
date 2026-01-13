#include<bits/stdc++.h>

using namespace std;
using ll=long long;


int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n,m,q;
  cin>>n>>m>>q;

  ll arr[n+1][m+1],p[n+1][m+1]{};

  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
      cin>>arr[i][j];
      p[i][j]=p[i][j-1] + p[i-1][j] + arr[i][j] - p[i-1][j-1];
    }
  }

  while(q--){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans = p[c][d] - p[c][b-1] - p[a-1][d] + p[a-1][b-1];
    cout<<ans<<endl;
  }
}