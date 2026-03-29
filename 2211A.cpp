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

    if(n==1) cout<<1<<endl;
    else {
      for(ll i=0;i<n;i++) cout<<2<<' ';
      cout<<endl;
    }
  }
}