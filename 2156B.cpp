#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,q;
    cin>>n>>q;
    string s;
    cin>>s;
    ll cnta=0,cntb=0;
    for(ll i=0;i<n;i++){
      if(s[i]=='A') cnta++;
      else cntb++;
    }

    while(q--){
      ll a;
      cin>>a;
      if(cntb==0) {
        cout<<a<<endl;
        continue;
      }
      ll ans=0;
      bool step=false;
      while(a>0){
      for(ll i=0;i<n;i++){
        if(s[i]=='A'){
          a-=1;
        }
        else{
          a/=2;
        }
        ans++;

        if(a==0){
          step=true;
          break;
        }
      }
      if(step) break;
    }
        cout<<ans<<endl;
    }
  }
}