#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    ll bigdiv=1;;
    for(ll i=1;i*i<=n;i++){
      if(n%i==0){
        if(i<=k) bigdiv=max(bigdiv,i);
        if(n/i<=k) bigdiv=max(bigdiv,n/i);
      }
    }

    cout<<n/bigdiv<<endl;
  }
}