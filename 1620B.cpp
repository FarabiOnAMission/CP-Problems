#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll w,h;
    cin>>w>>h;
    ll k1,k2,k3,k4;
    cin>>k1;
    vector<ll>v1(k1);
    for(ll i=0;i<k1;i++) cin>>v1[i];
    cin>>k2;
    vector<ll>v2(k2);
    for(ll i=0;i<k2;i++) cin>>v2[i];
    cin>>k3;
    vector<ll>v3(k3);
    for(ll i=0;i<k3;i++) cin>>v3[i];
    cin>>k4;
    vector<ll>v4(k4);
    for(ll i=0;i<k4;i++) cin>>v4[i];

    ll m1=max(v1[k1-1]-v1[0],v2[k2-1]-v2[0]);
    ll m2=max(v3[k3-1]-v3[0],v4[k4-1]-v4[0]);

    ll a1=m1*h;
    ll a2=m2*w;

    cout<<max(a1,a2)<<endl;

  }
}