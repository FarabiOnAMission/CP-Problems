#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m,c;
  cin>>n>>m>>c;
  vector<ll>a(n+1),b(m+1);
  vector<ll>prefsum(m+2,0);
  for(ll i=1;i<=n;i++) cin>>a[i];
  for(ll i=1;i<=m;i++) cin>>b[i];
  for(ll i=1;i<=m;i++){
    prefsum[i]=prefsum[i-1]+b[i];
  }

  for(ll i=1;i<=n;i++){
    ll R=min(i,m);
    ll L=max(1LL,i+m-n);

    ll sum=prefsum[R]-prefsum[L-1];

    sum%=c;
    a[i]=(a[i]+sum)%c;
    
    cout<<a[i]<<' ';
  }
  cout<<endl;
}