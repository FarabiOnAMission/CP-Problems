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
    ll c=0;
    for(ll i=0;i<n-1;i++){
      if(v[i]==7-v[i+1] || v[i]==v[i+1]){
        for(ll x=1;x<=6;x++){
          if(x==v[i+1]) continue;
          if(x==7-v[i+1]) continue;
          if (i+2<n && x==v[i+2]) continue;
          if (i+2<n && x==7-v[i+2]) continue;
          v[i+1]=x;
          break;
        }
        c++;
      }
    }

    cout<<c<<endl;
  }
}