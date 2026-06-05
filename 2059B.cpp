#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    ll mn=k/2 +1;
    for(ll i=0;i<n;i++) cin>>v[i];
    if(n==k){
      for(ll i=0;i<n;i++){
        if((i+1)%2==0 && v[i]!=(i/2 + 1)){
          mn=i/2 +1;
          break;
        }
      }
      cout<<mn<<endl;
    }
    else{
      bool fnd=false;
      for(ll i=1;i<n-k+2;i++){
        if(v[i]!=1){
          fnd=true;
          break;
        }
      }
      if(fnd==false) cout<<2<<endl;
      else cout<<1<<endl;
    }
  }
}