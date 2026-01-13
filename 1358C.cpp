#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];
    ll move=n-1;
    while(move>0 && v[move]<=v[move-1] ) move--;
    while(move>0 && v[move]>=v[move-1] ) move--;

    cout<<move<<endl;

  }
}