#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++) cin>>v[i];

    for(ll i=n-1;i>0;i-=2){
      if(v[i]<v[i-1]){
        swap(v[i],v[i-1]);
      }
    }

    vector<ll>c=v;
    sort(c.begin(),c.end());
    if(c==v){
      cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
  }
}