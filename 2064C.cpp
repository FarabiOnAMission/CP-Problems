#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1),prefsum(n+1,0),suffsum(n+2,0);
    for(ll i=1;i<=n;i++) cin>>v[i];
    for(ll i=1;i<=n;i++){
      if(v[i]>0) {
        prefsum[i]=prefsum[i-1]+v[i];
      }
      else prefsum[i]=prefsum[i-1];
      }

    for(ll i=n;i>=1;i--){
      if(v[i]<0)  suffsum[i]=abs(v[i])+suffsum[i+1];
      else suffsum[i]=suffsum[i+1];
    }
    ll ans=-1;
    for(ll i=1;i<=n;i++){
      ans=max(ans,suffsum[i]+prefsum[i]);
    }

    cout<<ans<<endl;
  }
}