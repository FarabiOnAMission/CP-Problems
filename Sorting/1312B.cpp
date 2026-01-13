#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin>>t;
  while(t--)
  {
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
      cin>>v[i];
    }

    sort(v.begin(),v.end(),greater<ll>());

    for(ll i=0;i<n;i++)
      cout<<v[i]<<' ';

    cout<<endl;

  }
}