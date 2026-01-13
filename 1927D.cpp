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
    vector<pair<ll,ll>>a;
    for(ll i=0;i<n;i++) cin>>v[i];
    for(ll i=0;i<n-1;i++){
      if(v[i]!=v[i+1]){
        a.push_back({i,i+1});
      }
    }
    ll q;
    cin>>q;
    while(q--){
      ll x,y;
      cin>>x>>y;
      x--,y--;
      auto it=lower_bound(a.begin(),a.end(),make_pair(x,y),[](const pair<int, int>& a, const std::pair<int, int>& b) {
                return a.first < b.first;
            });
      
      if(it==a.end()){
        cout<<-1<<' '<<-1<<endl;
      }
      else if(it->second >y){
        cout<<-1<<' '<<-1<<endl;
      }
      else
        cout<<it->first + 1<<' '<<it->second+1<<endl;
      }
    }
    cout<<endl;
  }
