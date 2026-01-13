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
  ll m=0;
  ll t=0;

  for(ll i=0;i<n;i++)
  {
      cin>>v[i];
  }


  ll b=-1;
  for(ll i=0;i<n-1;i++)
  {
    if(v[i]>v[i+1])
    {
      if(b!=-1)
        {
          cout<<-1<<endl;
          return 0;
        }

        b=i+1;
    }
  }

  if(b==-1)
    {
      cout<<0<<endl;
      return 0;
    }

  for(ll i=b;i<n-1;i++)
  {
    if(v[i]>v[i+1])
    {
      cout<<-1<<endl;
      return 0;
    }
  }

  if(v[n-1]<=v[0])
  {
    cout<<n-b<<endl;
  }
  else
    cout<<-1<<endl;
}