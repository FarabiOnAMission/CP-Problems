#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,t;
  cin>>n>>t;
  vector<ll>a(n);
  for(ll i=0;i<n;i++) cin>>a[i];
  ll hi=0,c=0;
  for(ll i=0;i<n;i++){
    if(hi<a[i]){
      c+=(a[i]-hi);
      hi=(a[i]+100);
    }
  }
  if(t>hi) c+=(t-hi);
  cout<<c<<endl;
}