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
    
    ll ans=v[0],curr=v[0];
    for(ll i=1;i<n;i++){
      if((v[i]%2 + 2)%2 != (v[i-1]%2 + 2)%2){
        curr=max(v[i],curr+v[i]);
      }
      else
        curr=v[i];

      ans=max(ans,curr);
    }

    cout<<ans<<endl;
  }
}
