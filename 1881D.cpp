#include<bits/stdc++.h>

using namespace std;
using ll=long long;

map<ll,ll>freqPrime;
void primeFactor(ll x){
  for(ll d=2;d*d<=x;d++){
    while(x%d==0){
      freqPrime[d]++;
      x/=d;
    }
  }
  if(x>1){
    freqPrime[x]++;
  }
}


int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++){
      cin>>v[i];
      primeFactor(v[i]);
    }

    bool ans=true;
    for(auto it:freqPrime){
      ll cnt=it.second;
      if(cnt%n!=0){
        ans=false;
      }
    }
    freqPrime.clear();
    if(!ans) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}