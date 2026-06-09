#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
      ll x;
      cin>>x;
      v.push_back(x);
    };
    sort(v.begin(),v.end());
    auto it = unique(v.begin(),v.end());
    v.erase(it,v.end());
    ll l=0;
    ll ans=-1;
    for(ll r=0;r<v.size();r++){
      while(l<r){
          if(v[r]-v[l]>n-1) l++;
          else break;
      }
      ans=max(ans,r-l+1);
    }

    cout<<ans<<endl;
  }
}