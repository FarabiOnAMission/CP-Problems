#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);
  ll n;
  cin>>n;
  vector<ll>ordr(n+1);
  vector<ll>id(n+1),temp(n+1);

  for(ll i=1;i<=n;i++) cin>>ordr[i];
  for(ll i=1;i<=n;i++) cin>>id[i];
  iota(temp.begin(),temp.end(),-1);

  for(ll i=0;i<3;i++){
    for(ll j=1;j<=n;j++){
      temp[j]=id[ordr[j]];
    }

    for(ll j=1;j<=n;j++){
      id[j]=temp[j];
    }

    iota(temp.begin(),temp.end(),-1);
  }

  for(ll i=1;i<=n;i++)
    cout<<id[i]<<endl;
}