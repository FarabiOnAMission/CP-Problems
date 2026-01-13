#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>a(n+1),b(m+1),besta(n+1,1e18),bestb(m+1,1e18);

  for(ll i=1;i<=n;i++) cin>>a[i];
  for(ll j=1;j<=m;j++) cin>>b[j];
  ll x;
  cin>>x;
  for(ll i=1;i<=n;i++){
    ll cur_sum=0;
    for(ll j=i;j<=n;j++){
      cur_sum+=a[j];
      ll len=j-i+1;
      besta[len]=min(besta[len],cur_sum);
    }
  }

  for(ll i=1;i<=m;i++){
    ll cur_sum=0;
    for(ll j=i;j<=m;j++){
      cur_sum+=b[j];
      ll len=j-i+1;
      bestb[len]=min(bestb[len],cur_sum);
    }
  }

  ll len=0;
  for(ll i=1;i<=n;i++){
    for(ll j=1;j<=m;j++){
      ll sum=besta[i]*bestb[j];
      if(sum<=x){
        len=max(len,i*j);
      }
    }
  }

  cout<<len<<endl;
}