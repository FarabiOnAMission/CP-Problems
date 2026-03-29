#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x;
    cin>>x;
    ll a=x,b=0;
    for(ll i=32;i>=0;i--){
      if((x & (1LL<<i)) == 0){
        if(2*x - a - b >= (2LL<<i)){
          a+=(1<<i);
          b+=(1<<i);
        }
      }
    }

    if(a^b == x && a+b == 2*x)
      cout<<a<<' '<<b<<endl;

    else cout<<-1<<endl;
  }
}