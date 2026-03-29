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
    ll c=1;
    for(ll i=1;i<n;i++){
      c++;
      if(s[i]=='L' && s[i-1]=='R'){
        break;
      }
    }

    cout<<c<<endl;
  }
}