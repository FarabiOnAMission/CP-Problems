#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  ll t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    ll cY=0;
    for(ll i=0;i<s.size();i++){
      if(s[i]=='Y') cY++;
    }

    if(cY>=2) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
  }
}