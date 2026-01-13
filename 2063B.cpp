#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll k=r-l+1;
    vector<ll>dummya=v;
    vector<ll>dummyb=v;

    sort(dummya.begin(),dummya.begin()+r);
    sort(dummyb.begin()+(l-1),dummyb.end());

    ll sum1=0;
    ll sum2=0;
    for(ll i=0;i<k;i++){
      sum1+=dummya[i];
    }
    for(ll i=l-1;i<k+(l-1);i++){
      sum2+=dummyb[i];
    }

    ll ans=min(sum1,sum2);
    cout<<ans<<endl;
  }
}