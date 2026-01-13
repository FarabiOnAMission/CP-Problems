#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n;
  cin>>n;
  ll mx=0;
  for(ll i=0;i<n;i++){
    ll xi,yi;
    cin>>xi>>yi;
    mx=max(mx,xi+yi);
  }

  cout<<mx<<endl;
}