#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    ll n;
    cin>>n;
    string s;
    cin>>s;
    ll ones=0;
    for(ll i=0;i<n;i++){
      if(s[i]=='1') ones++;
    }

    bool f2=false;
    for(ll i=1;i<n-1;i++){
      if(s[i-1]=='1' && s[i]=='1' && s[i+1]=='1'){
        f2=true;
        break;
      }
    }
    if(f2){
      cout<<ones-2<<endl;
      continue;
    }
    for(ll i=0;i<n-1;i++){
      if(s[i]=='1' && s[i+1]=='1'){
        f2=true;
        break;
      }
    }
    if(f2){
      cout<<ones-1<<endl;
      continue;
    }

    cout<<ones<<endl;
  }
}