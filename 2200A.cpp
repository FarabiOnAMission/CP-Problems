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
    sort(v.rbegin(),v.rend());
    ll x=v[0];
    ll c=0;
    for(ll i=0;i<n;i++){
      if(v[i]!=x){
        break;
      }
      else c++;
    }
    cout<<c<<endl;
  }
}