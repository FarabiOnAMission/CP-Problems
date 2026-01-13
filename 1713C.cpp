#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>ans(n);

    ll i=n-1;
    while(i>=0){
    ll bndary=ceil(sqrt(i));
    ll r=bndary*bndary;
    ll go=r-i;
    for(ll j=i;j>=go;j--){
      ans[j]=r-j;
    }
    i=go-1;
  }

  for(auto x:ans) cout<<x<<' ';

  cout<<endl;
  }
}