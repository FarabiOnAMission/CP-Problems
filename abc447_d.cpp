#include<bits/stdc++.h>

using namespace std;
using ll=long long;

int main(){
  string s;
  cin>>s;
  stack<ll>stka,stkb;
  ll ans=0;
  for(ll i=0;i<s.size();i++){
    if(s[i]=='A') stka.push(1);
    else if(s[i]=='B'){
      if(!stka.empty()){
        stkb.push(1);
        stka.pop();
      }
    }
    else if(s[i]=='C'){
      if(!stkb.empty()){
        ans++;
        stkb.pop();
      }
    }
  }

  cout<<ans<<endl;
}