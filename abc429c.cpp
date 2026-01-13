#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll n,m;
  cin>>n;
  vector<ll>v(n);
  map<ll,ll>freq;
  for(ll i=0;i<n;i++){
    cin>>v[i];
    freq[v[i]]++;
  }
  ll ans=0;
  
  for(auto [x,f]:freq){
    if(f>=2){
      ans+=((f*(f-1))/2)* (n-f);
    }
  }

  cout<<ans<<endl;
}