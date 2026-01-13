#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll k=n*n;
  set<ll>h;
  set<ll>v;
  vector<ll>ans;
  for(ll i=1;i<=k;i++){
    ll a,b;
    cin>>a>>b;
    if(!h.count(a) && !v.count(b)){
      h.insert(a);
      v.insert(b);
      ans.push_back(i);
    }
  }

  for(auto x:ans) cout<<x<<' ';
  cout<<endl;
}