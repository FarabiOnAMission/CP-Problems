#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  ll n=s.size();
  ll cntw=0;
  for(ll i=0;i<n;i++){
    if(s[i]=='W') cntw++;
  }

  ll currcnt=0;
  ll ans=0;
  for(ll i=0;i<n;i++){
    if(currcnt==cntw) break;

    if(s[i]=='W'){
      ans+=(i-currcnt);
      currcnt++;
    }
  }

  cout<<ans<<endl;
}