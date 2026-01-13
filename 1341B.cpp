#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>mntn(n);
    vector<ll>idx(n+1,0),prefsum(n+1,0);
    for(ll i=0;i<n;i++){
      cin>>mntn[i];
    }

    for(ll i=1;i<n-1;i++){
      if(mntn[i-1]<mntn[i] && mntn[i]>mntn[i+1]){
        idx[i]++;
      }
    }

    for(ll i=1;i<=n;i++){
      prefsum[i]=prefsum[i-1]+idx[i];
    }

    ll l=1,r=k;
    ll ansl=0;
    ll peaks=-1;
    while(r<=n){
      ll pk=prefsum[r-2]-prefsum[l-1];
      if(pk>peaks){
        peaks=pk;
        ansl=l;
      }
      l++;
      r++;
    }

    cout<<peaks+1<<' '<<ansl<<endl;
  }
}