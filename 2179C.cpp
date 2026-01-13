#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(0);
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    ll x=v[0];
    for(ll i=1;i<n;i++){
      if(v[i]>v[0]){
        x=max(x,v[i]-v[0]);
        break;
      }
    }

    cout<<x<<endl;
  }
}