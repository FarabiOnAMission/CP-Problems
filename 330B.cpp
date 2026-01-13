#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  vector<bool>v(n+1,false);
  while(m--){
    ll a,b;
    cin>>a>>b;
    v[a]=true;
    v[b]=true;
  }

  ll x;
  for(ll i=1;i<=n;i++){
    if(v[i]==false){
      x=i;
      break;
    }
  } 
    cout<<n-1<<endl;
    for(ll i=1;i<=n;i++){
    if(x==i) continue;
    cout<<x<<' '<<i<<endl;
  }
}