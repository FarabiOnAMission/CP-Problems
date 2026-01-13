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
    ll ans=LLONG_MIN;
    for(ll i=1;i*i<=n;i++){
      ll maxsum=LLONG_MIN;
      ll minsum=LLONG_MAX;
      if(n%i==0){
        ll x=i;
        ll y=n/i;
        ll sum=0;
        for(ll j=0;j<n;j++){
          sum+=v[j];
          if((j+1)%x==0){
            maxsum=max(maxsum,sum);
            minsum=min(minsum,sum);
            sum=0;
          }
        }
        ans=max(ans,maxsum-minsum);
        if(y!=x){
        maxsum=LLONG_MIN;
        minsum=LLONG_MAX;
        sum=0;
        for(ll j=0;j<n;j++){
          sum+=v[j];
          if((j+1)%y==0){
            maxsum=max(maxsum,sum);
            minsum=min(minsum,sum);
            sum=0;
          }
        }
        ans=max(ans,maxsum-minsum);
      }
    }
  }

  cout<<ans<<endl;
}
}