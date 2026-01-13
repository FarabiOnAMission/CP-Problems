#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++)
  {
    cin>>v[i];
  }

  ll ans=0;

  for(ll i=1;i<n;i++)
  {
    if(v[i]<v[i-1])
    {
      ans+=(v[i-1]-v[i]);
      v[i]=v[i-1];
    }
  }
  cout<<ans<<endl;
}