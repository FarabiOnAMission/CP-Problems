#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y,k;
    cin>>x>>y>>k;
    ll ans=(k+k*y-x+(x-2))/(x-1);
    cout<<ans+k+1<<endl;

  }
}