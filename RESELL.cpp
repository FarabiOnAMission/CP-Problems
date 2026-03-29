#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];
    sort(a.rbegin(),a.rend());
    ll c=0;
    ll buy=0,sell=0;
    for(ll i=0;i<n;i++){
      if(c<k){
        if(a[i]<5) break;
        buy+=5;
        sell+=a[i];
      }
      else{
        if(a[i]<10) break;
        buy+=10;
        sell+=a[i];
      }
      c++;
    }

    cout<<sell-buy<<endl;
  }
}