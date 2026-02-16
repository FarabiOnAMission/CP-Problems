#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
  ll n;
  cin>>n;
  vector<ll>R(n),c(n);
  for(ll i=0;i<n;i++){
    cin>>R[i];
    c[i]=R[i];
  }
  for(ll i=1;i<n;i++){
    c[i]=min(c[i],c[i-1]+1);
  }
  for(ll i=n-2;i>=0;i--){
    c[i]=min(c[i],c[i+1]+1);
  }
  ll mv=0;
  for(ll i=0;i<n;i++){
    mv+=abs(R[i]-c[i]);
    }
  cout<<mv<<endl;
  }
}