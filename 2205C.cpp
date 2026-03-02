#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<vector<ll>>q;
    for(ll i=0;i<n;i++){
      ll l;
      cin>>l;
      vector<ll>a(l),b;
      set<ll>s;
      for(ll j=0;j<l;j++) cin>>a[j];
      for(ll j=l-1;j>=0;j--){
        if(!s.count(a[j])){
          s.insert(a[j]);
          b.push_back(a[j]);
        }
      }
      q.push_back(b);
    }
    vector<bool>active(n,true);
    set<ll>dup;
    for(ll step=0;step<n;step++){
    for(ll i=0;i<n;i++){
      if(!active[i]) continue;
      vector<ll>cleaned;
      for(ll val:q[i]){
        if(!dup.count(val)) cleaned.push_back(val);
      }
      q[i]=cleaned;
    }
      ll best = -1;
      for (ll i=0;i<n;i++) {
      if (!active[i]) continue;
      if (best==-1 || q[i]<q[best]) {
          best=i;
        }
      }

      active[best]=false;
      for(auto x:q[best]){
        cout<<x<<' ';
        dup.insert(x);
      }
    }
    cout<<endl;
  }
}