#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll p,q;
    cin>>p>>q;
    if(3*p>=2*q && p<q)
      cout<<"Bob"<<endl;
    else cout<<"Alice"<<endl;
  }
}