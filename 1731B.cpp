#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const ll MOD = 1000000000 + 7;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    ll ans = n%MOD;
    ans=(ans*(n+1))%MOD;
    ans = (ans*(4*n-1))%MOD;
    ans=(ans*337)%MOD;
    cout<<ans<<endl;
    
  }
}