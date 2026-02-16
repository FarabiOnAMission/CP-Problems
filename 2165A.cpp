#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    ll mx=-1;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      mx=max(mx,v[i]);
    }
    v[n]=v[0];
    ll k=0;
    k-=mx;
    for(ll i=0;i<n;i++){
      k+=max(v[i],v[i+1]);
    }
    cout<<k<<endl;
  }
}