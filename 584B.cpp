#include<bits/stdc++.h>
using namespace std;
using ll=long long;

ll mod=1e9+7;

ll po(ll x,ll y){
  ll ans=1;
  while(y--){
    ans=((ans%mod)*(x%mod))%mod;
  }

  return ans;
}
int main(){
  ll m;
  cin>>m;
  ll ans= po(27,m);
  ll sub= po(7,m);
  cout<<(ans-sub+mod)%mod<<endl;
}