#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>v(m);
    set<ll>s;
    for(ll i=0;i<m;i++){
      cin>>v[i];
      s.insert(v[i]);
    }

    if(s.size()<m){
      cout<<1<<endl;
      continue;
    }
    sort(v.begin(),v.end());
    ll ans=n-v[m-1]+1;
    cout<<ans<<endl;
  }
}