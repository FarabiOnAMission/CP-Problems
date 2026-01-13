#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,p;
    cin>>n>>p;
    vector<ll>h(n+1,0);
    for(ll i=0;i<p;i++){
      ll x;
      cin>>x;
      for(ll j=x;j<=n;j+=x){
        h[j]=1;
      }
    }
    ll ans=0;
    for(ll i=1;i<=n;i++){
      if(i%7==6 || i%7==0){
        continue;
      }
      
      if(h[i]) ans++;
    }

    cout<<ans<<endl;

  }
}