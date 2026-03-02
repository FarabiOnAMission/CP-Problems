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
    ll mxi=-1,mx=-1;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      if(v[i]>mx){
        mx=v[i];
        mxi=i;
      }
    }
    v[mxi]=v[0];
    v[0] = mx;
    for(auto x:v) cout<<x<<' ';
    cout<<endl;

  }
}