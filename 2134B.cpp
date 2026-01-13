#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    for(ll i=0;i<n;i++){
      cout<<v[i]+(v[i]%(k+1))*k<<' ';
    }
    cout<<endl;
  }
}