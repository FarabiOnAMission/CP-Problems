#include<bits/stdc++.h>

using namespace std;
using ll=long long;
using vll=vector<ll>;

int main(){
  string s;
  cin>>s;
  ll n=s.size(),zerocount=0;
  vll v;
  for(ll i=0;i<n;i++){
    ll x=s[i]-'0';
    v.push_back(x);
    if(x==0) zerocount++;
  }

  sort(v.begin(),v.end());
  bool printzero=false;
  for(ll i=0;i<n;i++){
    if(v[i]!=0){ cout<<v[i];
    if(!printzero){
    for(ll j=0;j<zerocount;j++){
      cout<<0;
    }
    printzero=true;
  }
  }
  }
  cout<<endl;
}