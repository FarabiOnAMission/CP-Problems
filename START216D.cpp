#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll c1=0,c2=0;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      if(v[i]<2) c1++;
      else c2++;
    }

    ll distr=(c1+c2*2);
    ll ans=(distr+1)/2;
    cout<<ans<<endl;
    
  }
}