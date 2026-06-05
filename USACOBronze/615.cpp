#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);

  ll x,y,m;
  cin>>x>>y>>m;
  ll k=m;
  ll x1=m/x;
  ll x2=m/y;
  ll ans=LLONG_MIN,j=x2;
  for(ll i=0;i<=x1;i++){
    for(ll j=x2;j>=0;j--){
      ll g= x*i + y*j;
      if(g<=m){
        ans=max(ans,g);
      }
    }
  }

  cout<<ans<<endl;
}