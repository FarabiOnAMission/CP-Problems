#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<pair<ll,ll>>a(n),b(n),c(n);
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      a[i]={x,i};
    }
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      b[i]={x,i};
    }
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      c[i]={x,i};
    }
    
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());
    
    ll ans=0;
    for(ll i=0;i<3;i++){
      for(ll j=0;j<3;j++){
        if(a[i].second==b[j].second) continue;
        for(ll k=0;k<3;k++){
          if(c[k].second==a[i].second || c[k].second==b[j].second) continue;

          ans=max(ans,a[i].first+b[j].first+c[k].first);
      }
      }
  }

  cout<<ans<<endl;
  }
}