#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  sort(v.begin(),v.end());
  ll ans=((v[n-1]+2)/3);
  cout<<ans<<endl;
}