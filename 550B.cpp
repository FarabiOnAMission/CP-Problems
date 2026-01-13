#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll n,l,r,x;
  cin>>n>>l>>r>>x;

  vector<ll>marks(n);
  for(ll i=0;i<n;i++) cin>>marks[i];

  ll ans=0;
  for(ll mask=0;mask<(1<<n);mask++){
    ll sum=0;
    ll mx=LLONG_MIN,mn=LLONG_MAX;
    for(ll j=0;j<n;j++){
      if(mask&(1<<j)){
        sum+=marks[j];
        mx=max(mx,marks[j]);
        mn=min(mn,marks[j]);
      }
    }

    if(l<=sum && sum<=r && mx-mn>=x)
      ans++;
  }

  cout<<ans<<endl;
}