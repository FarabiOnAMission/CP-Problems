#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(ll i=0;i<n;i++)
  {
    cin>>v[i];
  }

  ll ans=k+1;

  for(ll i=1;i<n;i++)
  {
    ans+=min(v[i]-v[i-1],k+1);
  }

  cout<<ans<<endl;
}