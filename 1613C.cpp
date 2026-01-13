#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,h;
    cin>>n>>h;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
      cin>>a[i];
    }

    ll l=1,r=h;
    ll ans=LLONG_MAX;
    while(l<=r){
      ll m=l+(r-l)/2;
      ll d=m;
      for(ll i=1;i<n;i++){
        d+=min(m,a[i]-a[i-1]);

        if(d>=h) break;
      }

      if(d>=h){
        r=m-1;
        ans=min(ans,m);
      }
      else{
        l=m+1;
      }
    }

    cout<<ans<<endl;
  }
}