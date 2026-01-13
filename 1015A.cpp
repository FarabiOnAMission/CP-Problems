#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,x;
  cin>>n>>x;
  vector<ll>v(x+1,true);
  while(n--){
    ll l,r;
    cin>>l>>r;
    for(ll i=l;i<=r;i++){
      v[i]=false;
    }
  }
  ll c=0;
  for(ll i=1;i<=x;i++){
    if(v[i])c++;
  }
  cout<<c<<endl;
  for(ll i=1;i<=x;i++){
    if(v[i]) cout<<i<<' ';
  }

  cout<<endl;

}