#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  vector<ll>a(n+1),b(n+1),ext(n+1);
  map<ll,ll>ordr;
  for(ll i=1;i<=n;i++){
    cin>>a[i];
    ordr[a[i]]=i;
  }
  for(ll i=1;i<=n;i++){
    cin>>b[i];
    ext[i]=ordr[b[i]];
  }

  ll suff_min=n+1,innocent=0;
  for(ll i=n;i>=1;i--){
    if(ext[i]<suff_min){
      suff_min=ext[i];
      innocent++;
    }
  }

  cout<<n-innocent<<endl;
}