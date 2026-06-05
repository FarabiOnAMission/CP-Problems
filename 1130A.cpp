#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  ll cntP=0,cntN=0,cnt0=0;
  
  for(ll i=0;i<n;i++){
    cin>>v[i];
    if(v[i]>0) cntP++;
    else if(v[i]<0) cntN++;
    else cnt0++;
  }

  
  if(cntP>=((n+1)/2)){
    cout<<1<<endl;
  }
  else if(cntN>=(n+1)/2)cout<<-1<<endl;
  else cout<<0<<endl;
}