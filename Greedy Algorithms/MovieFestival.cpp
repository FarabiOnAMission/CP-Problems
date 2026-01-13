#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n;
  cin>>n;
  vector<pair<ll,ll>>v(n);

  for(ll i=0;i<n;i++)
  {
    ll a,b;
    cin>>a>>b;
    v[i]={b,a};
  }

  sort(v.begin(),v.end());
  ll current=-1;
  ll ans=0;
  for(ll i=0;i<n;i++)
  {
    if(v[i].second>=current)
    {
      current=v[i].first;
      ans++;
    }
  }

  cout<<ans<<endl;
}