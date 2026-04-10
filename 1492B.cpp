#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    vector<pair<ll,ll>>p(n);
    for(ll i=1;i<=n;i++){
      cin>>v[i];
      p[i-1]={v[i],i};
    }

    sort(p.rbegin(),p.rend());
    ll track=n,idx=0;
    for(ll i=0;i<n;i++){
      ll lastMax=p[i].second;
      if(lastMax<=track){
        for(ll j=lastMax;j<=min(track,n);j++){
          cout<<v[j]<<' ';
        }
        track=lastMax-1;
      }
    }

    cout<<endl;
  }
}