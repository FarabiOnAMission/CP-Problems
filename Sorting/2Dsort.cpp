#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool cmp(const pair<ll,ll> &a,const  pair<ll,ll>&b)
{
  if(a.first !=b.first)
  {
    return a.first<b.first;
  }
  return a.second>b.second;
}

int main()
{

  ll t;
  cin>>t;
  while(t--)
  {
  ll n;
  cin>>n;
  vector<pair<ll,ll>>v(n);
  for(ll i=0;i<n;i++)
  {
    ll x,y;
    cin>>x>>y;
    v[i]={x,y};
  }

  sort(v.begin(),v.end(),cmp);

  for(auto &p:v)
  {
    cout<<p.first<<' '<<p.second<<'\n';
  }

}
}