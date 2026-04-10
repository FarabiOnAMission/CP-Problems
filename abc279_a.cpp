#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll cntv=0,cntw=0;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='v') cntv++;
    else cntw++;
  }

  cout<<cntv + cntw*2<<endl;
}