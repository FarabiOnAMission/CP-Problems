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
    set<ll>seen,total;

    ll ans=0;
    for(ll i=0;i<n;i++){
      total.insert(v[i]);
      seen.insert(v[i]);
      if(total.size()==seen.size()){
        ans++;
        total.clear();
      }
    }

    cout<<ans<<endl;
  }
}