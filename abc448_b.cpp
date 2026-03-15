#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  map<ll,ll>has;
  for(ll i=1;i<=m;i++){
    ll x;
    cin>>x;
    has[i]=x;
  }
  ll s=0;
  for(ll i=0;i<n;i++){
    ll a,b;
    cin>>a>>b;
    if(b>has[a]){
      s+=has[a];
      has[a]=0;
    }
    else{
      s+=b;
      has[a]-=b;
    }
  }

  cout<<s<<endl;
}