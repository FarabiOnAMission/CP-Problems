#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,x;
  cin>>n>>x;
  vector<ll>a(n);
  for(ll i=0;i<n;i++) cin>>a[i];
  ll k=x;
  for(ll i=0;i<n;i++){
    if(a[i]<k){
      cout<<1<<endl;
      k=a[i];
    }
    else cout<<0<<endl;
  }
}