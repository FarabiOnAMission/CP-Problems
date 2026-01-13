#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
ll n,m,d;
cin>>n>>m>>d;

vector<ll>b(m);

for(ll i=0;i<m;i++)
  cin>>b[i];

ll c=0;
while(n--)
{
  ll sum=0;
  for(ll i=0;i<m;i++)
  {
    ll x;
    cin>>x;
    sum+=x*b[i];
  }

  if(sum + d>0)
    c++;

}

cout<<c<<endl;

}