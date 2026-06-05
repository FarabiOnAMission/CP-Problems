#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  map<ll,ll>freq;
  ll m=0;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    freq[x]++;
    freq[x+1]++;
    freq[x-1]=0;
    freq[x+2]=0;
    m=max({m,freq[x],freq[x+1]});
  }

  cout<<m<<endl;
  }