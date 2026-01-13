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
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    for(ll i=1;i<=57;i++){
      set<ll>s;
      ll x=1<<i;
      for(ll j=0;j<n;j++){
        s.insert(v[j]%x);
      }
      if(s.size()==2){
        cout<<x<<endl;
        break;
      }
    }
  }
}