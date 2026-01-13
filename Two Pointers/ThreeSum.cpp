#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,x;
  cin>>n>>x;
  vector<pair<ll,ll>>v(n+1);
  for(ll i=1;i<=n;i++){
    cin>>v[i].first;
    v[i].second=i;
  }

  sort(v.begin()+1,v.end());

  for(ll i=1;i<=n;i++){
    for(ll j=i+1;j<=n;j++){
      ll trget=x-(v[i].first + v[j].first);
      ll k = lower_bound(v.begin()+j+1,v.end(),make_pair(trget,0LL))-v.begin();

      if(k>1 && k<=n && v[k].first==trget){
      cout<<v[i].second<<' '<<v[j].second<<' '<<v[k].second<<endl;
      return 0;
      }
    }
  }

  cout<<"IMPOSSIBLE"<<endl;
}