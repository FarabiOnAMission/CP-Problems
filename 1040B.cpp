#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,k;
  cin>>n>>k;
  ll x=2*k+1;
  ll r=n%x;
  ll place=(n+x-1)/x;

  cout<<place<<endl;
  ll pos;
  if(r==0){
    pos=k+1;
  }
  else{
    pos=max(1LL,n-(place-1)*x -k);
  }

  for(ll i=pos;i<=n;i+=x){
    cout<<i<<" ";
  }
  cout<<endl;
  }
