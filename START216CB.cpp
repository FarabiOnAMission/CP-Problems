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
    for(ll i=0;i<n;i++) cin>>v[i];

    ll c=LLONG_MAX;
    for(ll i=1;i<n;i++){
      c=min(c,v[i]+v[i-1]);
    }

    cout<<c<<endl;
  }
}