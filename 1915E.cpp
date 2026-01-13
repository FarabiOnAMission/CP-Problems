#include<bits/stdc++.h>
using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    vector<ll>pref(n+1,0);
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=1;i<=n;i++){
      if((i-1)%2==0){
      pref[i]=pref[i-1]+v[i-1];
      }
      else{
        pref[i]=pref[i-1]-v[i-1];
      }
    }

    set<ll>s;
    bool f=false;
    for(ll i=0;i<=n;i++){
      if(!s.count(pref[i]))
          s.insert(pref[i]);
      else{
        cout<<"YES"<<endl;
        f=true;
        break;
      }
    }

    if(!f) cout<<"NO"<<endl;
  }
}