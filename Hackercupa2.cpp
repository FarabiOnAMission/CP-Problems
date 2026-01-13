#include<bits/stdc++.h>

using namespace std;
using ll=long long;

bool check(ll l,ll n,const vector<ll>&a){

  ll mn=a[0];
  for(ll i=0;i<n-1;i++){

    if(abs(a[i+1]-a[i])<=l){
      mn=min(mn,a[i+1]);
    }
    else{
      if(mn>l) return false;
      
      mn=a[i+1];
    }
  }

  return mn<=l;
}



int main(){
  ll t;
  cin>>t;
  for(ll k=1;k<=t;k++){
    ll n;
    cin>>n;
    vector<ll>v(n);
    ll mx=LLONG_MIN;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      mx=max(mx,v[i]);
    }

    if(n==1){
      cout<<"Case #"<<k<<": "<<v[0]<<endl;
      continue;
    }

    ll l=1,r=mx,ans=mx;
    while(l<=r){
      ll m=l+(r-l)/2;

      if(check(m,n,v)){
        r=m-1;
        ans=m;
      }
      else
        l=m+1;

    }
    cout<<"Case #"<<k<<": "<<ans<<endl;;

  }
}