#include<bits/stdc++.h>

using namespace std;
using ll=long long;

const ll MOD= 998244353;

int main(){
  ll n,m;
  cin>>n>>m;
  vector<ll>a(n),b(m),pb(m+1,0);
  for(ll i=0;i<n;i++) cin>>a[i];
  for(ll i=0;i<m;i++){
    cin>>b[i];
  }
  sort(b.begin(),b.end());
  for(ll i=0;i<m;i++){
    pb[i+1]=pb[i]+b[i];
  }
  ll sum=0;
  for(ll i=0;i<n;i++){
    auto it=upper_bound(b.begin(),b.end(),a[i]);
    ll idx= it-b.begin();
    ll sum1=(((idx)*a[i])%MOD - (pb[idx])%MOD+MOD)%MOD;
    ll sum2=((pb[m]-pb[idx]+MOD)%MOD-((m-idx)*a[i])%MOD + MOD)%MOD;
    sum=(sum + sum1%MOD+sum2%MOD+MOD)%MOD;
  }

  cout<<sum<<endl;
}