#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  ll n,x;
  cin>>n>>x;
  vector<ll>v(n);

  for(ll i=0;i<n;i++) cin>>v[i];

  sort(v.begin(),v.end());
  ll sum=0,c=0;

  ll i=0;
  while(sum+v[i]<=x)
  {
    sum+=v[i];
    c++;
    i++;
  }

  cout<<c<<endl;
}