#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  bool one=false;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    if(x==1) one=true;
  }

  if(one) cout<<"HARD"<<endl;
  else cout<<"EASY"<<endl;
}