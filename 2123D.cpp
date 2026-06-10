#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll cnt1=0;
    for(ll i=0;i<n;i++){
      if(s[i]=='1') cnt1++;
    }
    if(cnt1 <= k){
      cout<<"Alice"<<endl;
      continue;
    }
    if(n<2*k){
      cout<<"Alice"<<endl;
    }
    else cout<<"Bob"<<endl;
  }
}