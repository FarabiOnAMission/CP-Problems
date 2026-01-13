#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll t;
  cin>>t;
  while(t--){
    ll n;
    string s;
    cin>>n>>s;
    vector<bool>is(n+1,true);
    vector<ll>cost(n+1,LLONG_MAX);
    
    for(ll i=1;i<=n;i++){
      if(s[i-1]=='1')
        is[i]=false;
    }

    for(ll i=1;i<=n;i++){
      for(ll j=i;j<=n;j+=i){
        if(!is[j]){
          break;
        }

        cost[j]=min(cost[j],i);
      }
    }

    ll ans=0;
    for(ll i=1;i<=n;i++){
      if(is[i])
        ans+=cost[i];
    }

    cout<<ans<<endl;
  }

}