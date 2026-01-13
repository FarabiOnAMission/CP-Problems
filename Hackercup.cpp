#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  for(ll k=1;k<=t;k++){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    if(n==1){
      cout<<"Case #"<<k<<": "<<0<<endl;
      continue;
    }

    ll mx=LLONG_MIN;
    for(ll i=1;i<n;i++){
      mx=max(abs(a[i]-a[i-1]),mx);
    }

    cout<<"Case #"<<k<<": "<<mx<<endl;

  }
}