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
    bool hasS=false,hasP=false;

    for(ll i=1;i<n;i++){
      if(s[i]=='s') hasS=true;
    }

    for(ll i=0;i<n-1;i++){
      if(s[i]=='p') hasP=true;
    }

    if(hasS && hasP){
      cout<<"NO"<<endl;
    }
    else{
      cout<<"YES"<<endl;
    }
  }
}