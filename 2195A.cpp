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
    set<ll>s;
    for(ll i=0;i<n;i++){
      cin>>v[i];
      s.insert(v[i]);
    }
    if(s.count(67)){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }
}
}