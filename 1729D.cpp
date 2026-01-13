#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b(n);
    vector<ll>diff(n);

    for(ll i=0;i<n;i++) cin>>a[i];
    for(ll i=0;i<n;i++) cin>>b[i];
    for(ll i=0;i<n;i++) diff[i]=b[i]-a[i];

    sort(diff.begin(),diff.end());

    ll l=0,r=n-1;
    ll ans=0;
    while(l<r){
    ll x=diff[l]+diff[r];
    if(x>=0){
      ans++;
      l++;
      r--;
    }
    else{ l++;
    }
    }

    cout<<ans<<endl;
  }
}