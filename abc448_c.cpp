#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,q;
  cin>>n>>q;
  vector<ll>a(n);
  vector<pair<ll,ll>>b(n);
  for(ll i=0;i<n;i++){
    cin>>a[i];
    b[i].first=a[i];
    b[i].second=i+1;
  }

  sort(b.begin(),b.end());
  b.erase(b.begin()+6,b.end());

  for(ll i=0;i<q;i++){
    ll k;
    cin>>k;
    vector<ll>qry(k);
    for(ll i=0;i<k;i++){
      cin>>qry[i];
    }
    for(ll i=0;i<6;i++){
      ll x=b[i].second;
      auto it = find(qry.begin(),qry.end(),x);
      if(it==qry.end()){
        cout<<b[i].first<<'\n';
        break;
      }
    }
  }
}