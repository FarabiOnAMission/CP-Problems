#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n),a(n);
    for(ll i = 0; i < n; i++){
      cin>>v[i];
      a[i]=v[i];
    }

    vector<ll> prefmax(n);
    prefmax[0] = v[0];
    for(ll i = 1; i < n; i++){
      prefmax[i] = max(prefmax[i-1], v[i]);
    }
    for(ll i=0;i<n;i++){
      if(i%2==1) a[i] = prefmax[i];
    }
    ll cnt = 0;
    for(ll i=1;i<n;i+= 2){
      ll needL=0, needR=0;
      if(i-1>=0 && a[i]<=a[i-1]){
        needL=a[i-1]-a[i]+1; 
      }
      if(i+1<n && a[i]<=a[i+1]){
        needR=a[i+1]-a[i]+1; 
      }
      cnt += needL+needR;
      if(i-1>=0) a[i-1]-=needL;
      if(i+1<n)  a[i+1]-=needR;
    }

    cout<<cnt<<endl;
  }
}
