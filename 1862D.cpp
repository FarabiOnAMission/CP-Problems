#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll k=sqrt(2*n)+1;
    ll x=0;
    for(ll i=k;i>=1;i--){
      if(i*(i-1)<=2*n){
        x=i;
        break;
      }
    }
    ll c=(x*(x-1))/2;
    ll j=n-c;
    cout<<x+j<<endl;
  }
}