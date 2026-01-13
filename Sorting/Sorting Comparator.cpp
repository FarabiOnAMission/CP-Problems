#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool cmp(const pair<string,ll> &a,const  pair<string,ll>&b)
{
  if(a.second !=b.second)
    {
      return a.second>b.second;
    }

    return a.first<b.first;
}

int main()
{
  ll n;
  cin>>n;
  vector<pair<string,ll>>v(n);
  for(ll i=0;i<n;i++)
  {
    string name;
    ll s;
    cin>>name>>s;
    v[i]={name,s};
  }

  sort(v.begin(),v.end(),cmp);

  for(auto &p:v)
  {
    cout<<p.first<<' '<<p.second<<endl;
  }
}