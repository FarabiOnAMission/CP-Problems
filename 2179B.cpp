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
    ll s=0;
    for(ll i=1;i<n;i++){
      s+=abs(v[i]-v[i-1]);
    }

    ll x=s;
    for(ll i=1;i<n-1;i++){
      ll k=s;
      ll old=abs(v[i]-v[i-1])+abs(v[i+1]-v[i]);
      ll newd=abs(v[i+1]-v[i-1]);
      k=k-old+newd;
      x=min(x,k);
    }

    ll remvf=s-abs(v[1]-v[0]);
    x=min(x,remvf);

    ll remvl=s-abs(v[n-1]-v[n-2]);
    x=min(x,remvl);
    cout<<x<<endl;
  }
}