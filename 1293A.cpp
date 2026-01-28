#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,s,k;
    map<ll,ll>mp;
    cin>>n>>s>>k;
    ll mn=LLONG_MIN,mx=LLONG_MAX;
    vector<ll>closed(k);
    
    for(ll i=0;i<k;i++){
      cin>>closed[i];
      mp[closed[i]]=1;
    }

    for(ll i=s;i>=1;i--){
      if(!mp.count(i)){
        mn=i;
        break;
      }
    }

    for(ll i=s+1;i<=n;i++){
      if(!mp.count(i)){
        mx=i;
        break;
      }
    }
    ll ans1 = (mn == LLONG_MIN) ? LLONG_MAX : s - mn;
    ll ans2 = (mx == LLONG_MAX) ? LLONG_MAX : mx - s;

    cout<<min(ans1,ans2)<<endl;
  }
}