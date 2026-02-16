#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,mn=LLONG_MAX;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
      mn=min(mn,v[i]);
    }

    sort(v.begin(),v.end());
    if(k>=3){
      cout<<0<<endl;
      continue;
    }
    else if(k==2){
      ll ans=mn;
      for(ll i=0;i<n;i++){
        for(ll j=i+1;j<n;j++){
          ll a=abs(v[i]-v[j]);
          ans=min(ans,a);
          auto it = lower_bound(v.begin(), v.end(),a);
          if(it!=v.end()){
            ans=min(ans,abs(*it-a));
          }
          if(it!=v.begin()){
            ans=min(ans,a - *prev(it));
          }
      }
    }
    cout<<ans<<endl;
  }
  else{
    ll ans=mn;
    for(ll i=0;i<n;i++){
      for(ll j=i+1;j<n;j++){
        ans=min(ans,abs(v[i]-v[j]));
      }
    }

    cout<<ans<<endl;
  }
}
}