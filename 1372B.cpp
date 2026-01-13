#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll b=-1;
    if(n%2==0){
      cout<<n/2<<' '<<n/2<<endl;
    }
    else{
      ll b=1;
      for(ll i=2;i*i<=n;i++){
        if(n%i==0){
          b=max({b,i,n/i});
        }
      }

      cout<<b<<' '<<n-b<<endl;
    }
  }
}