#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x,m;
    cin>>n>>x>>m;
    ll l=x,r=x;
    while(m--){
      ll l2,r2;
      cin>>l2>>r2;
      if(max(l,l2)<=min(r2,r)){
      if(l>=l2){
        l=min(l2,l);
      }
      if(r<=r2){
        r=max(r2,r);
      }
    }
  }

    cout<<r-l+1<<endl;
  }
}