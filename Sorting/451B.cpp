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
    cin>>v[i];

  ll l=0,r=0;
  ll i=1;
  ll c=0;

  while(i<n)
  {
    if(v[i]<v[i-1])
    {
      l=i-1;
      c++;
      while(v[i]<=v[i-1] && i<n)
      {
        i++;
      }
      r=i-1;
    }
    else
      i++;
  }

  if(c>=2)
    cout<<"no"<<endl;
  else if(c==0)
  {
    cout<<"yes"<<endl;
    cout<<1<<' '<<1<<endl;
  }
  else
  {
    vector<ll>a=v;
    sort(a.begin(),a.end());
    reverse(v.begin() + l, v.begin() + r + 1);
    
    if(v==a)
    {
      cout<<"yes"<<endl;
      cout<<l+1<<' '<<r+1<<endl;
    }
    else
      cout<<"no"<<endl;

  }

  
}