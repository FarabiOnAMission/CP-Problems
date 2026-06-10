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
    set<ll>s;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      s.insert(v[i]);
    }
    if(s.size()==1){
      cout<<0<<endl;
      continue;
    }
    map<ll,ll>bucket;
    map<ll,ll>last_pos;

    for(ll i=0;i<n;i++){
      if(!last_pos.count(v[i])){
        last_pos[v[i]]=i;
        if(i==0 || i==n-1) bucket[v[i]]=1;
        else bucket[v[i]]=2;
      }
      else{
        if(i - last_pos[v[i]]>1){
          bucket[v[i]]++;
        }
        last_pos[v[i]]=i;
      }
    }

    for(auto x:last_pos){
      ll elem=x.first;
      ll pos = x.second;
      if(pos==n-1){
        bucket[elem]=max(1LL,bucket[elem]-1);
        break;
      }
    }

    ll ans=LLONG_MAX;
    for(auto x:bucket){
      ll cnt = x.second;
      ans=min(ans,cnt);
    }
    cout<<ans<<endl;
  }
}