#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    ll c=0;
    for(ll i=0;i<n;i++){
      if(v[i]==LLONG_MAX) continue;
      for(ll j=i;j<n;j++){
        if(v[i]>v[j]){
          v[j]=LLONG_MAX;
          c++;
        }
      }
    }

    cout<<c<<endl;
  }
}