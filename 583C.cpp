#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll k=n*n;
  vector<ll>v(k);
  multiset<ll>ms;
  vector<ll>ans;
  for(ll i=0;i<k;i++){ 
    cin>>v[i];
    ms.insert(v[i]);
  }

sort(v.rbegin(),v.rend());

for(ll i=0;i<k;i++){
  ll x=v[i];
  if(ms.find(x)==ms.end()) continue;

  ms.erase(ms.find(x));
  ans.push_back(x);
  for(ll j=0;j<ans.size()-1;j++){
    ll g=gcd(x,ans[j]);

    auto it=ms.find(g);
    if(it!=ms.end())
      ms.erase(it);
    it=ms.find(g);
    if(it!=ms.end())
      ms.erase(it);
  }

  if(ans.size()==n) break;
  }

for(auto x:ans) cout<<x<<' ';

}