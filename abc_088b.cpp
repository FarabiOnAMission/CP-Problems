#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){

  ll n;
  cin>>n;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];

  sort(v.begin(),v.end(),greater<int>());

  ll alice=0;
  ll bob=0;
  for(ll i=0;i<n;i++){
    if(i%2==0)
      alice+=v[i];
    else bob+=v[i];
  }

  cout<<alice-bob<<endl;
}