#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b;
    cin>>a>>b;
    ll pos1= 63 - __builtin_clzll(a);
    ll pos2= 63 - __builtin_clzll(b);

    if(pos2>pos1){
      cout<<-1<<endl;
      continue;
    }
    if(a==b){
      cout<<0<<endl;
      continue;
    }
    vector<ll>ans;

    for(ll i=0;i<=60;i++){
      if(((1LL<<i)&b) && !((1LL<<i)&a)){
        ans.push_back((1LL<<i));
        a^=(1LL<<i);
      }
    }
    if(a!=b) ans.push_back(a^b);

    cout<<ans.size()<<endl;
    for(ll i=0;i<ans.size();i++) cout<<ans[i]<<' ';
    cout<<endl;
  }
}