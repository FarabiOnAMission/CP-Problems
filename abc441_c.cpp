#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k,x;
  cin>>n>>k>>x;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  sort(v.begin(),v.end());
  ll sm=0;
  ll c=0;
  for(ll i=k-1;i>=0;i--){
    sm+=v[i];
    c++;
    if(sm>=x){
      break;
    }
  }

  if(sm<x) cout<<-1<<endl;
  else{
    cout<<n-k+c<<endl;
  }

}