#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n),pref(n+1,0);
    ll s=0;
    for(ll i=0;i<n;i++){
      cin>>a[i];
      s+=a[i];
      pref[i+1]=pref[i]+a[i];
    }
    ll min_L=LLONG_MAX,max_gain=-1;
    for(ll i=1;i<=n;i++){
      ll lb=i*i - i - pref[i-1];
      ll rb=i*i+i-pref[i];
      min_L=min(min_L,lb);
      max_gain=max(max_gain,rb-min_L);
    }

    cout<<s+max_gain<<endl;
  }
}