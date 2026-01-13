#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,d;
  cin>>n>>d;
  vector<ll>v(n);
  for(ll i=0;i<n;i++) cin>>v[i];

  sort(v.begin(),v.end());

  ll l=0,r=n-1,c=0;
  while(true){
    ll mx=v[r];
    ll mv=(d/mx)+1;
    l+=mv-1;
    if(l>r) break;
    r--;
    c++;
  }

  cout<<c<<endl;

}