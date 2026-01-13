#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll x,y;
    cin>>x>>y;
    ll a=(y-x)/2;
    cout<<a+x<<' '<<a<<endl;
  }
}