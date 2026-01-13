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

    n=unique(v.begin(),v.end())-v.begin();
    ll x=n;
    for(ll i=1;i<n-1;i++){
      if(v[i]>v[i-1] && v[i]<v[i+1]) x--;
      if(v[i]<v[i-1] && v[i]>v[i+1]) x--;
    }

    cout<<x<<endl;
  }
}