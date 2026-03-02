#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k,ans=0;
    string s;
    cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    cin>>s;
    vector<ll>cost;
    for(ll i=0;i<n;i++){
      if(s[i]=='0'){
        cost.push_back(v[i]);
      }
    }
    if(cost.size()<k){
      cout<<-1<<endl;
      continue;
    }
    sort(cost.begin(),cost.end());
    for(ll i=0;i<k;i++){
      ans+=cost[i];
    }
    cout<<ans<<endl;
  }
}