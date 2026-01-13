#include<bits/stdc++.h>
using namespace std;
using ll=long long;

vector<ll> primeFactor (ll n1,ll n2){
    vector<ll> ans ;
        for (ll i = 2; i * i <= n1; i++) {
        if (n1 % i == 0) {
            ans.push_back(i);
            while (n1 % i == 0) n1 /= i;
        }
    }
    if(n1>1) ans.push_back(n1);

        for (ll i = 2; i * i <= n2; i++) {
        if (n2 % i == 0) {
            ans.push_back(i);
            while (n2 % i == 0) n2 /= i;
        }
    }

    if(n2>1) ans.push_back(n2);
    return ans ;
    }
    


int main(){
  ll n;
  cin>>n;
  vector<pair<ll,ll>>v;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    v.push_back({a,b});
  }
  vector<ll>ans=primeFactor(v[0].first,v[0].second);
  bool got=false;
  for(ll p:ans){
    bool f=true;
    for(ll i=0;i<n;i++){
      ll x=v[i].first;
      ll y=v[i].second;

      if(x%p!=0 && y%p!=0){
        f=false;
        break;
      }
    }
    if(f){
      cout<<p<<endl;
      return 0;
    }
  }

  cout<<-1<<endl;
}