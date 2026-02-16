#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,q;
  cin>>n>>q;
  vector<ll>v(n),pref(n+1,0);
  for(ll i=0;i<n;i++){
    cin>>v[i];
    pref[i+1]=pref[i]+v[i];
  }

  while(q--){
    ll no;
    cin>>no;
    if(no==1){
      ll x;
      cin>>x;
      pref[x]=pref[x]-v[x-1]+v[x];
      swap(v[x],v[x-1]);
    }
    else{
      ll l,r;
      cin>>l>>r;
      cout<<pref[r]-pref[l-1]<<endl;
    }
    }
}