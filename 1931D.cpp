#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
    ll t;
    cin>>t;
    while(t--){
    ll n,x,y;
    cin>>n>>x>>y;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    map<pair<ll,ll>,ll>freq;

    ll ans=0;
    for(ll i=0;i<n;i++){
      ll rx=v[i]%x;
      ll ry=v[i]%y;
      ans+=freq[{(x-rx)%x,ry}];

      freq[{rx,ry}]++;
    }

    cout<<ans<<endl;
  }
}