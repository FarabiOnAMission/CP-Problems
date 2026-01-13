#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x,y;
    cin>>n>>x>>y;
    ll divx=(n/x);
    ll divy=(n/y);
    ll l=lcm(x,y);
    ll divboth=(n/l);
    divx-=divboth;
    divy-=divboth;

    ll k=n;
    ll tsumy=(divy*(divy+1))/2;
    ll tsumx=divx *(2*k-divx+1)/2;

    cout<<tsumx-tsumy<<endl;
  }
}