#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll k,x;
    cin>>k>>x;
    ll l=1,r=2*k-1,ans=2*k-1;
    while(l<=r){
      ll m=l+(r-l)/2;
      ll sum;
      if(m<k){
        sum=m*(m+1)/2;
        
      }
      else{
        ll rem=(2*k-1)-m;
        sum= k*k - (rem*(rem+1))/2;
      }
      if(sum<x){
          l=m+1;
      }
      else{
          ans=m;
          r=m-1;
      }
    }

    cout<<ans<<endl;
  }
}