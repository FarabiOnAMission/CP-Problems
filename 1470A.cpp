#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,m;
    cin>>n>>m;
    vector<ll>k(n),c(m);
    for(ll i=0;i<n;i++) cin>>k[i];
    for(ll i=0;i<m;i++) cin>>c[i];

    ll j=0,cost=0;
    sort(k.rbegin(),k.rend());
    for(ll i=0;i<n;i++){
      if(j<k[i]){
        cost+=c[j];
        j++;
      }
      else{
        cost+=c[k[i]-1];
      }
    }

    cout<<cost<<endl;
  }
}