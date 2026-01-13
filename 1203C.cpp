#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++){
    cin>>v[i];
  }
  ll g=v[0];

  for(ll i=1;i<n;i++){
    g=gcd(g,v[i]);
  }

  ll c=0;
  for(ll i=1;i*i<=g;i++){
    if(g%i==0){
      c++;

      if(i!=g/i) c++;
    }
  }

  cout<<c<<endl;
}