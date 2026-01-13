#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++) cin>>a[i];

    ll sum=0;
    for(ll i=0;i<n;i++){
      if(a[i]!=abs(a[i])){
        ll mx=a[i];
        ll j=i;
        while(a[j]!=abs(a[j]) && j<n){
          mx=max(mx,a[j]);
          j++;
        }
        sum+=mx;
        i=j-1;
      }
      else{
        ll mx=a[i];
        ll j=i;
        while(a[j]==abs(a[j]) && j<n){
          mx=max(mx,a[j]);
          j++;
        }
        sum+=mx;
        i=j-1;
      }
    }
    cout<<sum<<endl;
  }
}