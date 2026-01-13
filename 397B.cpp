#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,l,r;
    cin>>n>>l>>r;
    if(l==r){
      if(n%l==0) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
    else{
      ll x=(n+r-1)/r;
      ll y=n/l;

      if(x<=y) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }
  }
}