#include<bits/stdc++.h>

using namespace std;
using ll=long long;
const ll MOD=998244353;

ll fact(ll x){
  ll ans=1;
  for(ll i=x;i>=1;i--){
    ans=((ans%MOD)*(i%MOD))%MOD;
  }

  return ans;
}

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    ll n=s.size();
    ll chars_to_remove=0;
    ll blocks=1;
    for(ll i=0;i<n;i++){
      ll r=0;
      while(s[i]==s[i+r] && i+r<n){
        r++;
      }
      chars_to_remove+=(r-1);
      blocks=((blocks%MOD)*(r%MOD))%MOD;
      
      i+=(r-1);
    }

    ll no_of_sequences=((blocks)*fact(chars_to_remove))%MOD;
    cout<<chars_to_remove<<' '<<no_of_sequences<<endl;
  }
}