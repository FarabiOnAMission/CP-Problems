#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll a,b,x,y;
    cin>>a>>b>>x>>y;
    ll rem=a%x;
    ll ans = (a/x)*y + rem + b;
    cout<<ans<<endl;
  }
}