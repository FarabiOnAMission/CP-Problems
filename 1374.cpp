#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    string s;
    cin>>n>>s;
    ll balance=0;
    ll ans=0;
    for(ll i=0;i<n;i++){
      if(s[i]==')'){
        balance--;
      if(balance<0)
      {
        ans++;
        balance=0;
      }
      }
      else
        balance++;
    }

    cout<<ans<<endl;
  }
}
