#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);

  ll n;
  cin>>n;
  vector<ll>a(n);
  for(ll i=0;i<n;i++) cin>>a[i];

  ll ans=LLONG_MAX;
  for(ll i=0;i<n;i++){
    ll c=0,temp=0;
    for(ll j=i;j<n;j++){
      temp+=c*a[j];
      c++;
    }

    for(ll j=0;j<=i-1;j++){
      temp+=c*a[j];
      c++;
    }
    ans=min(ans,temp);
  }

  cout<<ans<<endl;
}