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
    ll m=LLONG_MAX;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      m=min(m,v[i]);
    }
    if(v[0]>m){
      cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;
  }
}