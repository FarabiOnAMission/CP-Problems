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
    ll mx=LLONG_MIN;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      mx=max(v[i],mx);
    }
    
    cout<<mx<<endl;
  }
}