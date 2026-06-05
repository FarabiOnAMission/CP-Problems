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
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }

    ll mx= *max_element(v.begin(),v.end());
    if(mx<0){
      cout<<mx<<endl;
      continue;
    }
    ll smeven=0,smodd=0;
    for(ll i=0;i<n;i++){
      if(v[i]>0){
        if(i%2==0){
          smodd+=v[i];
        }
        else smeven+=v[i];
      }
    }

    cout<<max(smodd,smeven)<<endl;
  }
}