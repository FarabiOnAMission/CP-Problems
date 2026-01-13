#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll n,k;
  cin>>n>>k;
  vector<ll>freq(n+1,0);
  vector<ll>pref(n+1,0);
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    freq[x]++;
  }

  for(ll i=1;i<=n;i++){
    pref[i]=pref[i-1]+freq[i];
  }
  ll ans=1;
  for(ll g=2;g<=n;g++){
    ll test=min(n,4*g-1);
    ll er=n-pref[test];
    er+=freq[g];
    if(2*g<=n) er+=freq[2*g];
    if(3*g<=n) er+=freq[3*g];

    if(k>=n-er) ans=g;
  }
  cout<<ans<<endl;
  }
  }