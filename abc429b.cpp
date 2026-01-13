#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n>>m;
  map<ll,ll>freq;
  ll s=0;
  for(ll i=0;i<n;i++){
    ll x;
    cin>>x;
    s+=x;
    freq[x]++;
  }
  if(s<m) {
    cout<<"No"<<endl;
    return 0;
  }
  ll f=s-m;
  if(freq.count(f)){
    cout<<"Yes"<<endl;
  }
  else cout<<"No"<<endl;
  

}