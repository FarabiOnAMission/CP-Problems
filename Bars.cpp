#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll need,p;
    cin>>need>>p;
    vector<ll>v(p);
    for(ll i=0;i<p;i++) cin>>v[i];

    bool f=false;

    for(ll mask=0;mask<(1<<p);mask++){
      ll has=0;
      for(ll j=0;j<p;j++){
        if(mask&(1<<j)) has+=v[j];
      }

      if(has==need) {
        f=true;
        break;
      }
    }

    if(f) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
}