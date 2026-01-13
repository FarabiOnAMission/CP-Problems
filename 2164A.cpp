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
    for(ll i=0;i<n;i++){
      cin>>v[i];
    }
    ll x;
    cin>>x;
    sort(v.begin(),v.end());
    if(v[0]<=x && x<=v[n-1]) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}