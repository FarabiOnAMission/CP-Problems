#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    set<ll>dis;
    vector<ll>prefdis(n,0);
    for(ll i=0;i<n;i++){
      dis.insert(s[i]);
      prefdis[i]=dis.size();
    }

    ll ans=0;
    for(ll i=0;i<n;i++){
      ans+=prefdis[i];
    }

    cout<<ans<<endl;
  }
}