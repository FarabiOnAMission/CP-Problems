#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll n,k;
  cin>>n>>k;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];
  if(k!=1){
    sort(v.rbegin(),v.rend());
    ll s=0;
    for(ll i=0;i<=k;i++){
      s+=v[i];
    }
    cout<<s<<endl;
  }
  else{
    ll l = *max_element(v.begin(),v.end()-1);
    ll r = *max_element(v.begin()+1,v.end());
    
    cout<<max(l+v[n-1],r+v[0])<<endl;
  }
}
}