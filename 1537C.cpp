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

    sort(v.begin(),v.end());
    ll abs_min=LLONG_MAX;
    if(n==2){
      cout<<v[0]<<' '<<v[1]<<endl;
      continue;
    }
    ll p1=0;
    for(ll i=1;i<n;i++){
      ll curr_min=v[i]-v[i-1];
      if(curr_min<abs_min){
        p1=i;
        abs_min=curr_min;
      }
    }

    for(ll i=p1;i<n;i++){
      cout<<v[i]<<' ';
    }
    for(ll i=0;i<p1;i++){
      cout<<v[i]<<' ';
    }

    cout<<endl;
  }
}