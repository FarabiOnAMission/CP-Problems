#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  if(k<=n){
    cout<<(k-1)/2<<endl;
  }
  else{
    ll y=k-n;
    ll x=n;
    ll ans=max(0LL,(x-y+1)/2);
    cout<<ans<<endl;
  }
}