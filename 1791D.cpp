#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll t;
  cin>>t;
  while(t--){
    ll n;
    string s;
    cin>>n;
    cin>>s;

    set<ll>count;
    vector<ll>pref(n+1,0);
    vector<ll>suff(n+1,0);

    for(ll i=1;i<n;i++) {
      count.insert(s[i-1]);
      pref[i]=count.size();
    }

    count.clear();
    for(ll i=n-1;i>=0;i--){
      count.insert(s[i]);
      suff[i]=count.size();
    }
    ll ans=0;
    for(ll i=1;i<n;i++)
    {
      ans=max(ans,pref[i]+suff[i]);
    }

    cout<<ans<<endl;
  }

}