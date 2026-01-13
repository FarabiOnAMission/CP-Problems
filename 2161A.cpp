#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll r,x,d,n;
    cin>>r>>x>>d>>n;
    string s;
    cin>>s;
    ll curr_r=r;
    ll ans=0;

    for(ll i=0;i<n;i++){
      if(s[i]=='1'){
        ans++;
        curr_r=max(0LL,curr_r-d);
      }
      else{
        if(curr_r<x){
          ans++;
          curr_r=max(0LL,curr_r-d);
        }
      }
    }

    cout<<ans<<endl;
  }
}