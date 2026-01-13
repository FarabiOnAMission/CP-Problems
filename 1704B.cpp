#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,x;
    cin>>n>>x;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)  cin>>v[i];
    
    ll y=v[0];
    ll z=v[0];
    ll c=0;

    for(ll i=1;i<n;i++){
      y=min(v[i],y);
      z=max(v[i],z);

      if(z-y>2*x){
        y=v[i];
        z=v[i];
        c++;      
    }
  }

  cout<<c<<endl;
}
}