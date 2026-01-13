#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    ll ans=0;
    for(ll i=0;i<n;i++){
      if(s[i]=='1'){
        bool f=true;
      for(ll j=i-1;j>=max(0LL,i-k+1);j--){
        if(s[j]=='1'){
          f=false;
        }
      }
      if(f) ans++;
    }
    }

    cout<<ans<<endl;
  }
}