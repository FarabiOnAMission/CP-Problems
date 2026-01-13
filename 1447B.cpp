#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    ll pos=0,neg=0;
    ll minimum=LLONG_MAX;
    ll sum=0;

    for(ll i=0;i<n;i++){
      for(ll j=0;j<m;j++){
        ll x;
        cin>>x;
        if(x<0) neg++;
        else pos++;

        sum+=abs(x);
        minimum=min(minimum,abs(x));
      }
    }

    if(neg%2==0) cout<<sum<<endl;
    else cout<<sum-2*minimum<<endl;
  }
}